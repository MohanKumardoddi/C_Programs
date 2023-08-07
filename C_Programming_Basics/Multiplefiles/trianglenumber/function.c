#include<stdio.h>
#include"number.h"

int triangle()
{
	printf("the numbers in triangle:");
	scanf("%d",&rows);
	for(i =0;i<=rows;i++){
	       	for(j =0;j<=i;j++)
		{
			printf("%d",j);
			printf("\n");
		}
	}
}

