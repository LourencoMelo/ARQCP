/* Ex.19*/

#include <stdio.h>
#include <string.h>
#include "find_word.h"

int main(){
	
	char str[] = "jotyr ihvb ola pop ola";
	char word[] = "ola";
	char *strPtr = str;
	
	
	char* adress = find_word(str,word,strPtr);
	
	printf("%s \n", adress);

return 0;


}
