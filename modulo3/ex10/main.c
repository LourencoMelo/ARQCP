#include <stdio.h>
#include "str_cat.h"

char vec1[] = "Ola meus caros";
char vec2[] = "Hoje e quarta feira";
char vec3[40];

char *ptr1 = vec1;
char *ptr2 = vec2;
char *ptr3 = vec3;

int main(void){
	
	str_cat();
	
	printf("%s \n", vec3);
	
	
return 0;	
}
