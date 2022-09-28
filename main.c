//
// Created by itkxl on 2022/9/26.
//
#include <stdio.h>
#include "xdisk.h"

extern xdisk_driver_t disk_driver;

int main(void){

    printf("hello world!");

    const char * path = "a.img";

    xdisk_t  disk;

    int err;

    err = xdisk_open(&disk,"test",&disk_driver,(void *)path);

    if (err){
        printf("open disk failed");
    }

    return 0;


}

