#include <stdio.h> //for printf()
#include <string.h>
#include "count_zeros.h" //definition of ptr1 and count_zeros()

char *ptr1;
char str1[] = "4000004";
int main(void){
	int result = 0;
	
	ptr1 = str1;
	
	result = count_zeros();
	
	printf("The numbers of zero: %d", result);
	
	return 0;
}

