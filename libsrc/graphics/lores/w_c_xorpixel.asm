;
;       Generic pseudo graphics routines for text-only platforms
;
;       Xor pixel at (x,y) coordinate.


        SECTION code_clib
	PUBLIC	c_xorpixel
        defc    NEEDxor = 1



.c_xorpixel			
	INCLUDE "w_c_pixel.asm"
