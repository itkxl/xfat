//
// Created by itkxl on 2022/9/26.
//
#include <stdio.h>
#include "xdisk.h"

extern xdisk_driver_t disk_driver;

int main(void){

    printf("hello world!\n");

    const char * path = "/home/itkxl/Documents/do-it/fat32/xfat/disk_test.img";

    xdisk_t  disk;

    int err;

    err = xdisk_open(&disk,"test",&disk_driver,(void *)path);

    if (err){
        printf("open disk failed");
    }

    printf("open disk success");

    return 0;


}

