
; int _strtoi__callee(const char *nptr, char **endptr, int base)

SECTION code_stdlib

PUBLIC __strtoi__callee

EXTERN asm__strtoi

__strtoi_:

   pop af
   pop hl
   pop de
   pop bc
   push af
   
   jp asm__strtoi
