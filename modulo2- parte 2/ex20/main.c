#include <stdio.h>
#include "check_num.h"

int num = 5;

int main(void){

	char result = check_num();
	printf("Result: %d", result);

	return 0;
}
