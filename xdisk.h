//
// Created by itkxl on 2022/9/26.
//

#ifndef XFAT_XDISK_H
#define XFAT_XDISK_H
#include "xtypes.h"



typedef enum {
    FS_NOT_VALID = 0x00,
    FS_FAT32 = 0x01,
    FS_EXTEND = 0x05,
    FS_WIN95_FAT32_0 = 0xB,
    FS_WIN95_FAT32_1 = 0x0c,
}xfs_type_t;

#pragma pack(1)
#define MBR_PRIMARY_NR 4

typedef struct _mbr_part_t {
    u8_t boot_active;
    u8_t start_header;
    u16_t start_sector : 6;
    u16_t start_cylinder : 10;
    u8_t system_id;
    u8_t end_header;
    u16_t end_sector : 6;
    u16_t end_cylinder : 10;
    u32_t relative_sectors;
    u32_t total_sectors;
}mbr_part_t;

typedef struct _mbr_t {
    u8_t code[446]; //可执行代码
    mbr_part_t part_info[MBR_PRIMARY_NR]; //主分区信息
    u8_t boot_sig[2]; //有效标志

} mbr_t;

#pragma

typedef struct _xdisk_t;

typedef struct _xdisk_driver_t {
    xfat_err_t (*open)(struct _xdisk_t *disk,void *init_data);
    xfat_err_t (*close)(struct _xdisk_t *disk);
    xfat_err_t (*read_sector)(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count);
    xfat_err_t (*write_sector)(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count);
} xdisk_driver_t;

typedef struct _xdisk_t {
    const char *name;
    u32_t total_sector;
    u32_t sector_size;
    xdisk_driver_t *driver;
    void *data;
} xdisk_t;

xfat_err_t xdisk_open(xdisk_t *disk, const char *name, xdisk_driver_t *driver, void *init_data);

xfat_err_t xdisk_close(xdisk_t *disk);

/**
 * 获取磁盘主分区数量
 * @param disk
 * @param count 用于返回磁盘主分区数量
 * @return
 */
xfat_err_t xdisk_get_part_count(xdisk_t * disk, u32_t* count);

xfat_err_t xdisk_read_sector(xdisk_t *disk,u8_t *buffer,u32_t start_sector,u32_t count);

xfat_err_t xdisk_write_sector(xdisk_t *disk,u8_t *buffer,u32_t start_sector,u32_t count);

#endif //XFAT_XDISK_H
