#include<stdio.h>
#include"Arraysize.h"


int Array_size()
   { 
 
	   int A[]={10,20,30,40,50};
	int sum =0;

       int length = sizeof(A)/sizeof(A[0]);//This Main Logic
      
       for (int i=0;i<length;i++)
       {
	 sum =sum + A[i];
       }
   printf("Find out the Size of Array:%d",sum);

}
