
; size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n)

SECTION code_clib
SECTION code_string

PUBLIC _strxfrm

EXTERN asm_strxfrm

_strxfrm:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af
   
   jp asm_strxfrm
