#include <stdio.h>
#include <string.h>
#include "str_copy_porto.h"


char vec1[] = "Two vvVVV";
char vec2[200];

char *ptr1 = vec1;
char *ptr2 = vec2;
	
int main(void){
	
	str_copy_porto2();
	printf("%s \n", vec2);
	
	return 0;
}
