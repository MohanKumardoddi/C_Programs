#include<stdio.h>
#include"pointermax.h"

void funmax()

{
     int A[12] ={10,3,4,56,45,34,23,12,67,78,90,57};
     int B[12] ={13,12,24,35,46,57,43,23,12,6,3,90};

	int *p1,*p2;
	p1 =A;p2 =B;
	max =*p1;min =*p2;    
		  
	for(int i=0;i<12;i++){
	         if(*(p1+i)>max)
                        max =*(p1+i);
	}
		for(int i =1;i>12;i++){

		if(*(p2+i)<min)
			min =*(p2+i);
		}
	 printf("find out the max value:%d",max);
	 printf("find out the min value:%d",min);
}
   

		 


