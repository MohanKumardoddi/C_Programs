#include<stdio.h>
#include"Nibbles.h"

int main()
{
	unsigned int num = 0x12345678;
	unsigned int run =Nibbles(num);

	printf("input:0x%08x\n",num);
	printf("output:0x%08x\n",run);

     return 0;
}
