#include<stdio.h>
#include"sweap.h"

int sweap_num()
{
	printf("the value of Before sweap1 =%d and sweap2 =%d number",sweap1,sweap2);
          sweap1 =sweap1^sweap2;
	  sweap2 =sweap1^sweap2;
	  sweap1 =sweap1^sweap2;
	printf("the value of After Sweap1 =%d and swaep2=%d number",sweap1,sweap2);
}
