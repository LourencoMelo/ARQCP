#include <string.h>

int where_is (char *str, char c, int *p){
	int found = 0;	 
	int i = 0; 
	int j = 0;
	for(i = 0; i < strlen(str); i ++){
		if(*(str + i) == c){
			*(p+j) = i;
			found ++;
			j ++;
		}	
	}
	return found;

 }
