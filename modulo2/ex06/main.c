#include <stdio.h>
#include "concatBytes.h"

char byte1 = '1';
char byte2 = 'a';

int main(void){
	
	
	short s = concatBytes();
	
	printf(" Single short : %hd \n" , s);
	
	return 0;
	
}
