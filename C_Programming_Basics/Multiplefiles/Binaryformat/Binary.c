#include<stdio.h>
#include"Binary.h"

void Binaryformat(int num1)
{
	if(num1==0)
	{
		printf("Enter the Binary Number:");
		return ;
	}
	int binary[32];
	int i =0;
	while (num1>0)
	{
	    binary[i] =num1 % 2;

            num1 =num1/2;
            i++;
     }
	printf("Binary Represention:");
 for (int j=i-1;j >=0;j--) 
		 {
	 printf("%d",binary[j]);
 }
}

