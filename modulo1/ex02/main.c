/* Ex.02*/

#include <stdio.h>
#include "copy_vec.h"

int main(){
	
	int n = 10;
	int loop;
	int vec1[] = {1,2,3,4,5,6,7,8,9,10};
	int vec2[10];
	int *vPtr1 = vec1;
	int *vPtr2 = vec2;
	
	copy_vec(vPtr1, vPtr2, n);
	
	printf("Array2: ");
        for (loop = 0; loop < n; loop++) {
            printf("%d; ", vec2[loop]);
        }

	printf("\n");
	
	return 0;

}
