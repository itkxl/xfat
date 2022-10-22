//
// Created by itkxl on 2022/9/26.
//

#include "xdisk.h"

u8_t temp_buffer[512];

xfat_err_t xdisk_open(xdisk_t *disk, const char *name, xdisk_driver_t *driver, void *init_data){

    xfat_err_t  err;
    disk->driver = driver;

    err = disk->driver->open(disk,init_data);

    if (err < 0){
        return err;
    }

    disk->name = name;
    return FS_ERROR_OK;

}

xfat_err_t xdisk_close(xdisk_t *disk){
    xfat_err_t err;
    err = disk->driver->close(disk);
    return err;
}


xfat_err_t xdisk_get_part_count(xdisk_t * disk, u32_t* count){
    mbr_part_t * part;
    u8_t * disk_buffer = temp_buffer;
    int err = xdisk_read_sector(disk,disk_buffer,0,1);
    if (err < 0){
        return err;
    }
    part = ((mbr_t*)temp_buffer)->part_info;
    int r_count = 0;
    for (int i = 0; i < MBR_PRIMARY_NR; ++i,part ++) {
        if (part->system_id == FS_NOT_VALID){
            continue;
        }
        r_count++;
    }
    *count = r_count;
    return FS_ERROR_OK;
}



xfat_err_t xdisk_read_sector(xdisk_t *disk, u8_t *buffer, u32_t start_sector, u32_t count){
    xfat_err_t err;

    if (start_sector + count >= disk->total_sector){
        return FS_ERROR_PARAM;
    }
    err = disk->driver->read_sector(disk,buffer,start_sector,count);
    return err;
}

xfat_err_t xdisk_write_sector(xdisk_t *disk,u8_t *buffer,u32_t start_sector,u32_t count){

    xfat_err_t  err;
    if (start_sector + count >= disk->total_sector){
        return FS_ERROR_PARAM;
    }
    err = disk->driver->write_sector(disk,buffer,start_sector,count);
    return err;
}
