/* Ex12 */

#include <stdio.h>
#include "capitalize.h"

int main(){
	int i;
	int j;
	char string[] = "Sopa de macaco";
	
	printf("Original String: ");
	for(i=0; i < (sizeof(string)/sizeof(string[0])); i++){
			printf("%c", string[i]);
	}
	
	char *str = string;
	capitalize(str);
	printf("\n String capitalized: ");
	
	for(j=0; j < (sizeof(string)/sizeof(string[0])) ; j++){
		printf("%c", string[j]);
	}
	
	printf("\n");

	return 0;
}
