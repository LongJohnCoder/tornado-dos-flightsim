embewe1		OBJECTHEADER <OBJ_SCALE4,1000,embewe2,0,COL_BLACK1,32,12,8>
		DB	000,088,064	;   0
		DB	000,040,064	;   1
		DB	128,072,080	;   2
		DB	128,056,080	;   3
		DB	000,072,080	;   4
		DB	000,056,080	;   5
		DB	128,066,080	;   6
		DB	128,062,080	;   7
		DB	000,062,080	;   8
		DB	000,066,080	;   9
		DB	112,088,064	;  10
		DB	112,040,064	;  11
		DB	128,072,064	;  12
		DB	128,056,064	;  13
		DB	-1

		DW	OFFSET	embewe1_1

		EVEN

embewe1_1	DW	54


embewe1_0	LABEL	BYTE
		DB	008h,COL_RAIL1,06,10,08,04,-1		; face 0
		DB	002h,4,COL_RAIL2,14,16,-1		; line 3
		DB	002h,4,COL_RAIL2,12,18,-1		; line 4
		DB	008h,COL_HILL2,00,20,04,08,-1		; face 3
		DB	008h,COL_HILL2,10,06,22,02,-1		; face 4
		DB	008h,COL_GREY3,04,24,26,06,-1		; face 5
		DB	008h,COL_GREY2,20,24,04,-1		; face 6
		DB	008h,COL_GREY2,06,26,22,-1		; face 7
		DB	-1

		EVEN

embewe2		OBJECTHEADER <OBJ_SCALE2,8192,embewe3,0,COL_BLACK1,16,6,4>
		DB	032,076,064	;   0
		DB	032,052,064	;   1
		DB	096,068,072	;   2
		DB	096,060,072	;   3
		DB	032,068,072	;   4
		DB	032,060,072	;   5
		DB	096,064,072	;   6
		DB	032,064,072	;   7
		DB	088,076,064	;   8
		DB	088,052,064	;   9
		DB	096,068,064	;  10
		DB	096,060,064	;  11
		DB	-1

		DW	OFFSET	embewe2_1

		EVEN

embewe2_1	DW	48


embewe2_0	LABEL	BYTE
		DB	008h,COL_RAIL1,06,10,08,04,-1		; face 0
		DB	002h,4,COL_RAIL2,12,14,-1		; line 4
		DB	008h,COL_HILL2,00,16,04,08,-1		; face 3
		DB	008h,COL_HILL2,10,06,18,02,-1		; face 4
		DB	008h,COL_GREY3,04,20,22,06,-1		; face 5
		DB	008h,COL_GREY2,16,20,04,-1		; face 6
		DB	008h,COL_GREY2,06,22,18,-1		; face 7
		DB	-1

		EVEN

embewe3		OBJECTHEADER <OBJ_SCALE1,16384,-1,1,COL_BLACK1,8,3,2>
		DB	048,070,064	;   0
		DB	048,058,064	;   1
		DB	080,066,068	;   2
		DB	080,062,068	;   3
		DB	048,066,068	;   4
		DB	048,062,068	;   5
		DB	080,064,068	;   6
		DB	048,064,068	;   7
		DB	076,070,064	;   8
		DB	076,058,064	;   9
		DB	080,066,064	;  10
		DB	080,062,064	;  11
		DB	-1

		DW	OFFSET	embewe3_1

		EVEN

embewe3_1	DW	48


embewe3_0	LABEL	BYTE
		DB	008h,COL_RAIL1,06,10,08,04,-1		; face 0
		DB	002h,4,COL_RAIL2,12,14,-1		; line 3
		DB	008h,COL_HILL2,00,16,04,08,-1		; face 3
		DB	008h,COL_HILL2,10,06,18,02,-1		; face 4
		DB	008h,COL_GREY3,04,20,22,06,-1		; face 5
		DB	008h,COL_GREY2,16,20,04,-1		; face 6
		DB	008h,COL_GREY2,06,22,18,-1		; face 7
		DB	-1

		EVEN

