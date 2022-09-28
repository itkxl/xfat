//
// Created by itkxl on 2022/9/26.
//
#include "xtypes.h"
#include <stdio.h>
#include <errno.h>
#include "xdisk.h"

/**
 * 模拟磁盘打开接口
 * @param disk
 * @param init_data 用于添加路径
 * @return
 */
xfat_err_t xdisk_hw_open(struct _xdisk_t *disk,void *init_data){
    const char * path = (const char *)init_data;

    FILE  * file = fopen(path,"rb+");
    if (file == NULL){
        printf("open disk failed path:%s,code:%d",path,errno);
        return FS_ERROR_IO;
    }
    disk->data = file;
    disk->sector_size = 512;

    fseek(file,0,SEEK_END);
    disk->total_sector = ftell(file) / disk->sector_size;
    return FS_ERROR_OK;

}


xfat_err_t xdisk_hw_close(struct _xdisk_t *disk){
    FILE * file = (FILE *)disk->data;
    fclose(file);
    return FS_ERROR_OK;
}

xfat_err_t xdisk_hw_read_sector(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count){
    return FS_ERROR_OK;
}

xfat_err_t xdisk_hw_write_sector(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count){
    return FS_ERROR_OK;
}


xdisk_driver_t disk_driver = {
        .open = xdisk_hw_open,
        .close = xdisk_hw_close,
        .read_sector = xdisk_hw_read_sector,
        .write_sector = xdisk_hw_write_sector,
};