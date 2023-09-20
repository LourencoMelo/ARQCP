/* Ex.06 */

#include <stdio.h>
#include <math.h>
#include "power_ref.h"

int main(){
	int x;
	int y;
	printf("Choose your x:\n");
	scanf("%d",&x);
	printf("Choose your y:\n");
	scanf("%d",&y);
	
	int *xPtr;
	xPtr = &x;

	power_ref(xPtr,y);

	printf("%d \n", *xPtr);
	
	
	return 0;
}


