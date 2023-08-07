#include<stdio.h>
#include"copyArray.h"

int Arrayfun()
{
	int A[10] ={14,23,54,36,47,65,46,76,56,87};
	int copied[10];

	for(int i =0;i<10;i++)
	{
	   copied[i] =A[i];
	}
	printf("orginal Array to copied\n");

	for(int i =0;i<10;i++)
	{

	printf("   %2d        %2d\n", A[i], copied[i]);

        }
}
