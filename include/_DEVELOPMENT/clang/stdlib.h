
// automatically generated by m4 from headers in proto subdir


#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <stddef.h>
#include <stdint.h>

// DATA STRUCTURES

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int  size_t;
#endif

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned char wchar_t;
#endif

#ifndef _FLOAT_T_DEFINED
#define _FLOAT_T_DEFINED

   #ifdef __CLANG
   
   typedef float float_t;
   
   #endif

   #ifdef __SDCC
   
   typedef float float_t;
   
   #endif
   
   #ifdef __SCCZ80
   
   typedef double float_t;
   
   #endif
   
#endif

#ifndef _DOUBLE_T_DEFINED
#define _DOUBLE_T_DEFINED

   #ifdef __CLANG
   
   typedef float double_t;
   
   #endif

   #ifdef __SDCC
   
   typedef float double_t;
   
   #endif
   
   #ifdef __SCCZ80
   
   typedef double double_t;
   
   #endif
   
#endif

typedef struct
{

   int rem;
   int quot;

} div_t;

typedef struct
{

   unsigned int rem;
   unsigned int quot;

} divu_t;

typedef struct
{

   long quot;
   long rem;

} ldiv_t;

typedef struct
{

   unsigned long quot;
   unsigned long rem;

} ldivu_t;

#ifdef __CLANG

   typedef struct
   {
      long long rem;
      long long quot;
   
   } lldiv_t;

   typedef struct
   {
      unsigned long long rem;
      unsigned long long quot;

   } lldivu_t;

#endif

#ifdef __SDCC

   typedef struct
   {
      long long rem;
      long long quot;
   
   } lldiv_t;

   typedef struct
   {
      unsigned long long rem;
      unsigned long long quot;

   } lldivu_t;

#endif

#ifndef NULL
#define NULL            ((void*)(0))
#endif

#define EXIT_FAILURE    0
#define EXIT_SUCCESS    1

#define RAND_MAX        32767

#define MB_CUR_MAX      1

#define FTOA_FLAG_PLUS  0x40
#define FTOA_FLAG_SPACE 0x20
#define FTOA_FLAG_HASH  0x10

#define DTOA_FLAG_PLUS  0x40
#define DTOA_FLAG_SPACE 0x20
#define DTOA_FLAG_HASH  0x10

// FUNCTIONS

extern void _div_(div_t *d,int numer,int denom);


extern void _divu_(divu_t *d,unsigned int numer,unsigned int denom);


extern void _ldiv_(ldiv_t *ld,long numer,long denom);


extern void _ldivu_(ldivu_t *ld,unsigned long numer,unsigned long denom);


extern void _insertion_sort_(void *base,size_t nmemb,size_t size,void *compar);


extern void _quicksort_(void *base,size_t nmemb,size_t size,void *compar);


extern void _shellsort_(void *base,size_t nmemb,size_t size,void *compar);


extern uint16_t _random_uniform_cmwc_8_(void *seed);


extern uint32_t _random_uniform_xor_32_(uint32_t *seed);


extern uint16_t _random_uniform_xor_8_(uint32_t *seed);


extern int _strtoi_(char *nptr,char **endptr,int base);


extern uint16_t _strtou_(char *nptr,char **endptr,int base);


extern void abort(void);


extern int abs(int j);


extern int at_quick_exit(void *func);


extern int atexit(void *func);


extern double_t atof(char *nptr);


extern int atoi(char *buf);


extern long atol(char *buf);


extern void *bsearch(void *key,void *base,size_t nmemb,size_t size,void *compar);


extern size_t dtoa(double_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t dtoe(double_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t dtog(double_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t dtoh(double_t x,void *buf,uint16_t prec,uint16_t flags);


extern void exit(int status);


extern size_t ftoa(float_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t ftoe(float_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t ftog(float_t x,void *buf,uint16_t prec,uint16_t flags);


extern size_t ftoh(float_t x,void *buf,uint16_t prec,uint16_t flags);


extern char *itoa(int num,char *buf,int radix);


extern long labs(long j);


extern char *ltoa(long num,char *buf,int radix);


extern void qsort(void *base,size_t nmemb,size_t size,void *compar);


extern void quick_exit(int status);


extern int rand(void);


extern void srand(uint16_t seed);


extern double_t strtod(char *nptr,char **endptr);


extern float_t strtof(char *nptr,char **endptr);


extern long strtol(char *nptr,char **endptr,int base);


extern uint32_t strtoul(char *nptr,char **endptr,int base);


extern int system(char *s);


extern char *ultoa(uint32_t num,char *buf,int radix);


extern char *utoa(uint16_t num,char *buf,int radix);



#ifndef _ALLOC_MALLOC_H

extern void *aligned_alloc(size_t alignment,size_t size);


extern void *calloc(size_t nmemb,size_t size);


extern void free(void *p);


extern void *malloc(size_t size);


extern void *realloc(void *p,size_t size);



extern void *aligned_alloc_unlocked(size_t alignment,size_t size);


extern void *calloc_unlocked(size_t nmemb,size_t size);


extern void free_unlocked(void *p);


extern void *malloc_unlocked(size_t size);


extern void *realloc_unlocked(void *p,size_t size);



#endif

#ifdef __CLANG

extern long long atoll(char *buf);
extern void _lldiv_(lldiv_t *ld,long long numer,long long denom);
extern void _lldivu_(lldivu_t *ld,unsigned long long numer,unsigned long long denom);
extern long long llabs(long long i);
extern char *lltoa(long long num,char *buf,int radix);
extern long long strtoll(char *nptr,char **endptr,int base);
extern unsigned long long strtoull(char *nptr,char **endptr,int base);
extern char *ulltoa(unsigned long long num,char *buf,int radix);

#endif

#ifdef __SDCC

extern long long atoll(char *buf);
extern long long atoll_callee(char *buf) __z88dk_callee;
#define atoll(a) atoll_callee(a)

extern void _lldiv_(lldiv_t *ld,long long numer,long long denom);


extern void _lldivu_(lldivu_t *ld,unsigned long long numer,unsigned long long denom);



extern long long llabs(long long i);
extern long long llabs_callee(long long i) __z88dk_callee;
#define llabs(a) llabs_callee(a)
   
extern char *lltoa(long long num,char *buf,int radix);


extern long long strtoll(char *nptr,char **endptr,int base);


extern unsigned long long strtoull(char *nptr,char **endptr,int base);


extern char *ulltoa(unsigned long long num,char *buf,int radix);



#endif

#endif
