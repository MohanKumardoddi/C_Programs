#include<stdio.h>
#include"sum.h"


void sumofodd()
{
	 sum =0;
	printf("the sum of the odd numbers:");
	scanf("%d",&n);
	printf("\n the odd number is the :");
	for(i =0;i<=n;i++)
	{
	   printf("%d",2*i-1);
	   sum+=2*i-1;
	}
       printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}
