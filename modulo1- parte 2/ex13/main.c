/*Ex.13*/

#include <stdio.h>
#include <string.h>
#include "where_is.h"

int main(){
	
	int i = 0;
	char string[] = "ccc";
	int vec[strlen(string)];
	char c = 'c';
	
	//char *sPtr = string;
	//int *ePtr = vec;
	
	found = where_is(string,c,vec);
	
	printf("Number of times we found the character :  %d \n", found);
	
	printf(" Here is your array populated : {");
	
	for(i = 0; i < found - 1; i ++){
		printf("%d;" , vec[i]);
	}
	
	printf("%d} \n", vec[found - 1]);
	
	return 0;



}
