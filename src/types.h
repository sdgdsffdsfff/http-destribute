#ifndef __TYPES_H__
#define __TYPES_H__

#ifdef __cpluscplus
extern "C"{
#endif

#ifdef HTTP_D
/* 基本数据类型定义 */
typedef char INT8;
typedef short INT16;
typedef int INT32;
typedef long INT64;

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef unsigned long UINT64;

#define HTTP_TRUE       1
#define HTTP_FALSE      0

#define HTTP_SUCCESS    0
#define HTTP_FAIL       1

#ifdef __cpluscpus
}
#endif

#endif
