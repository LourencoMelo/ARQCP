#include <stdio.h>
#include "decrypt.h"

char vec[] = "aa sopa de macaco";
char *ptr1 = vec;

int main(void){
	int result = 0;
	result = decrypt();
	printf("%s \n",vec);
	printf("The result of the decrypting is: %d \n", result);

return 0;	
}
