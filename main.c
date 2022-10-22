//
// Created by itkxl on 2022/9/26.
//
#include <stdio.h>
#include "xdisk.h"

extern xdisk_driver_t disk_driver;


#pragma pack(1)
typedef struct _mbr_t {

    u32_t a;
    u16_t b;
    u32_t c;

} mbr_t;
#pragma

int main(void){


    mbr_t * mbr = (mbr_t*)0x100;
    printf("%p  \n",&(mbr->c));

    printf("hello world!\n");

    const char * path = "/home/itkxl/Documents/do-it/fat32/xfat/disk_test.img";

    xdisk_t  disk;

    int err;

    err = xdisk_open(&disk,"test",&disk_driver,(void *)path);

    if (err){
        printf("open disk failed \n");
    } else {
        printf("open disk success \n");
    }

    err = xdisk_close(&disk);

    if (err){
        printf("close disk failed \n");
    } else {
        printf("close disk success \n");
    }

    return 0;


}

