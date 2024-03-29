#ifndef __TYPES_H__
#define __TYPES_H__

#ifdef __cpluscplus
extern "C"{
#endif

#ifdef HTTP_D
/* 基本数据类型定义 */
typedef char CHAR;
typedef short SHORT;
typedef int INT32;
typedef long INT64;

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT32;
typedef unsigned long UINT64;
typedef void VOID;
#define HTTP_TRUE       1
#define HTTP_FALSE      0

#define HTTP_SUCCESS    0
#define HTTP_FAIL       1


/* 标记位设计与清除宏定义*/
#define HTTP_FLAG_SET(f, b) (f) | (b)
#define HTTP_FLAG_RESET(f, b) (f) & (~b)
#define HTTP_FLAG_TEST(f, b) (f) & (b)
#ifdef __cpluscpus
}
#endif

#endif
