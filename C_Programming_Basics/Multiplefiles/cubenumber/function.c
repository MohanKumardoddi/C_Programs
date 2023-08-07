#include<stdio.h>
#include"cubenumber.h"

void cubenumber()
{
 
   int i,n;
   n =0;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for(i=1;i<=10;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 } 
	 

