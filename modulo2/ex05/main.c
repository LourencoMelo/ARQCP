#include <stdio.h>
#include "swapBytes.h"

short s = 10;

int main(void){
	
	printf("Value of s of before the switch : %hd \n", s);
	
	short swapedS = swapBytes();
	
	printf("New value of s : %hd \n" , swapedS);
	
	return 0;

}
