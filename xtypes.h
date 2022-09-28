//
// Created by itkxl on 2022/9/26.
//

#ifndef XFAT_XTYPES_H
#define XFAT_XTYPES_H


#include <stdint.h>

typedef uint8_t u8_t;
typedef uint16_t u16_t;
typedef uint32_t u32_t;
typedef uint64_t uint64_t;

typedef enum _xfat_err_t {
    FS_ERROR_OK = 0,
    FS_ERROR_IO = -1,
    FS_ERROR_PARAM = -2,
    FS_ERROR_NONE = -3

} xfat_err_t;

#endif //XFAT_XTYPES_H
