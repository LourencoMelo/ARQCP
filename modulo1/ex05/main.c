#include <stdio.h>
#include "upper2.h"

int main(){
	char string[] = "SouPa de MAcaCo";
	char *str = string;
	int arraySize = sizeof(string) / sizeof(string[0]);
	int i;
	printf("String before his transformation: ");
	for(i = 0; i < arraySize; i++){ //*print each caracter of the array
		printf("%c", string[i]);
	}	
	printf("\n");
	upper2(str);
	
	printf("Now everything is in lowercases: ");
	int j;
	for(j = 0; j < arraySize; j++){ //*print each caracter of the array
		printf("%c", string[j]);
	}	
	printf("\n");
	
	return 0;
}
