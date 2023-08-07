#include<stdio.h>
#include"Nibbles.h"

unsigned int Nibbles(int num)
{
     int run  =0;

	    run  |=(num  & 0x0000000f)<<28;
            run  |=(num  & 0x000000f0)<<20;//<<8
            run  |=(num  & 0x00000f00)<<12;
	    run  |=(num  & 0x0000f000)<<4;
	    run  |=(num  & 0x000f0000)>>4;
	    run  |=(num  & 0x00f00000)>>12;//>>8
            run  |=(num  & 0x0f000000)>>20;
	    run  |=(num  & 0xf0000000)>>28;



    return run;

}
