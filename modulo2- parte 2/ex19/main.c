#include <stdio.h>
#include "needed_time.h"

short current = 5;
short desired = -2;

int main(void){

	int time = needed_time();
	
	printf("The time needed is: %d \n", time);

return 0;
}
