#include <stdio.h>
#include "frequencies.h"

int main(){
	int n_shorts = 4;
	short arrayshort[] = {1,2,3,4};
	int arrayint[n_shorts];
	
	short *shorts = arrayshort;
	int *integers = arrayint;

	compress_shorts(shorts, n_shorts, integers);
	
	return 0;
}
