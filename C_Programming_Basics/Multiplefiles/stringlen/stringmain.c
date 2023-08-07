#include<stdio.h>
#include"stringlen.h"

int main()
{   
	char str[100];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	int length =stringlength(str);
	printf("length of the String:%d\n",length);
}
