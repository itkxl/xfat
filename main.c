//
// Created by itkxl on 2022/9/26.
//
#include <stdio.h>
#include "xdisk.h"

extern xdisk_driver_t disk_driver;


void test_get_part_count(){
    int count;

    printf("start test get_part_count \n");

    const char * path = "/home/itkxl/Documents/do-it/fat32/xfat/disk.img";
    xdisk_t disk;

    int err = xdisk_open(&disk,"test_get_part_count",&disk_driver,path);
    if (err){
        printf("test get_part_count open file failed \n");
        return;
    }

    err = xdisk_get_part_count(&disk,&count);

    if (err){
        printf("test get_part_count failed \n");
        xdisk_close(&disk);
        return;
    }

    printf("get_part_count:%d \n",count);

    xdisk_close(&disk);
}



int main(void){


    printf("hello world!\n");

    const char * test_path = "/home/itkxl/Documents/do-it/fat32/xfat/disk_test.img";

    xdisk_t  disk;

    int err;

    err = xdisk_open(&disk,"test",&disk_driver,(void *)test_path);

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

    test_get_part_count();

    return 0;
}

