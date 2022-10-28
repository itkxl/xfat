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

/**
 * 模拟磁盘关闭
 * @param disk
 * @return
 */
xfat_err_t xdisk_hw_close(struct _xdisk_t *disk){
    FILE * file = (FILE *)disk->data;
    fclose(file);
    return FS_ERROR_OK;
}

/**
 * 模拟从磁盘读
 * @param disk
 * @param buffer
 * @param start_sector
 * @param count
 * @return
 */
xfat_err_t xdisk_hw_read_sector(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count){
    u32_t  offset = start_sector * disk->sector_size;
    FILE * file = (FILE *)disk->data;
    int err = fseek(file,offset,SEEK_SET);
    if (err == -1){
        printf("seek disk failed : 0x%x \n",(int)offset);
    }

    err = fread(buffer,disk->sector_size,count,file);

    if (err == -1){
        printf("read disk failed :sector:%d ,count:%d",start_sector,count);
        return FS_ERROR_IO;
    }

    return FS_ERROR_OK;
}

/**
 * 模拟磁盘写
 * @param disk
 * @param buffer
 * @param start_sector
 * @param count
 * @return
 */
xfat_err_t xdisk_hw_write_sector(struct _xdisk_t *disk, u8_t * buffer, u32_t start_sector, u32_t count){

    u32_t  offset = start_sector * disk->sector_size;
    FILE * file = disk->data;

    int err = fseek(file,offset,SEEK_SET);

    if (err == -1){
        printf("seek disk failed : 0x%x",offset);
    }

    err = fwrite(buffer,disk->sector_size,count,file);

    if (err == -1){
        printf("write disk failed :selector:%d,count:%d",start_sector,count);
    }

    fflush(file);

    return FS_ERROR_OK;
}


xdisk_driver_t disk_driver = {
        .open = xdisk_hw_open,
        .close = xdisk_hw_close,
        .read_sector = xdisk_hw_read_sector,
        .write_sector = xdisk_hw_write_sector,
};