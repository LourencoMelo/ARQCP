#include <stdio.h>
#include "encrypt.h"

char vec[] = "aaa hola jose";

char *ptr1 = vec;

int main(void){

	int changed = encrypt();
	printf("%s \n", vec);
	printf("%d \n", changed);

return 0;
}
