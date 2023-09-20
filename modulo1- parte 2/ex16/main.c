#include <stdio.h>
#include "where_exists.h"

int main(){
	char string1 = "sopa";
	char string2 = "abssopa";
	
	char *str1 = string1;
	char *str2 = string2;
	
	where_exists(str1, str2);
	
	return 0;
}
