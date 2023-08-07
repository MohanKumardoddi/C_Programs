#include<stdio.h>
#include"Arraycount.h"

int Arrayfun()
{
	int A[10] ={23,45,56,67,54,23,78,98,67,43};
	int copied[10];

	count =9;
	for(int i=0;i<10;i++)
	{
		copied[count] =A[i];
		i--;
	}
        printf("the count the Array of Reverse\n");

	for(int i =0;i<10;i++)
	{
		printf("%d,%d\n",A[i],copied[count]);
	}
}
