;
;	High Resolution library for the MicroBee
;	Version for the 8x11 PCG paged font (640x275)
;
;	Written by Stefano Bodrato, November 2016
;
;
;	Divide by five lookup table
;   useful to switch the PCG bank every 5 columns (port $1C)
;
;
;	$Id: div5.asm,v 1.1 2016-11-21 11:18:38 stefano Exp $
;

	SECTION rodata_clib
	PUBLIC	div5

.div5
defb  0+128, 0+128, 0+128, 0+128, 0+128, 1+128, 1+128, 1+128, 1+128, 1+128, 2+128, 2+128, 2+128, 2+128, 2+128, 3+128, 3+128, 3+128, 3+128, 3+128
defb  4+128, 4+128, 4+128, 4+128, 4+128, 5+128, 5+128, 5+128, 5+128, 5+128, 6+128, 6+128, 6+128, 6+128, 6+128, 7+128, 7+128, 7+128, 7+128, 7+128
defb  8+128, 8+128, 8+128, 8+128, 8+128, 9+128, 9+128, 9+128, 9+128, 9+128, 10+128, 10+128, 10+128, 10+128, 10+128, 11+128, 11+128, 11+128, 11+128, 11+128
defb  12+128, 12+128, 12+128, 12+128, 12+128, 13+128, 13+128, 13+128, 13+128, 13+128, 14+128, 14+128, 14+128, 14+128, 14+128, 15+128, 15+128, 15+128, 15+128, 15+128