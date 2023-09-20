#include <string.h>
#include <stdio.h>

int value = 1;

int palindrome(char *str){
	int i = 0;
	int j = 0;
	char arrayAux[strlen(str)];
	
	if(*(str+i) == '\0'){
        return value=0;
    }
	
	for(i = 0, j = 0; i < strlen(str); i ++ ,j ++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            arrayAux[j] = str[i] + 32;
        }else{
			arrayAux[j] = str[i];
		}
    }
    
    arrayAux[j] = '\0';
    printf("%s \n\n", arrayAux);
    
	int m=0; 
    int n=0;

	for(i=0; i< strlen(arrayAux); i++){
        if (*(arrayAux + i) == ',' || *(arrayAux + i) == '.' || *(arrayAux + i) == '!'){
            *(arrayAux+i) = ' ';
        }
    }
    
     while (*(arrayAux + n)){
        if (*(arrayAux + n) != ' '){
                arrayAux[m++] = *(arrayAux + n);
        }
        n++;
    }

    arrayAux[m] = '\0';
    printf("%s \n\n", arrayAux);
    
	
	for(i = 0,j = strlen(arrayAux) - 1; i < strlen(arrayAux);i ++, j--){
		if(arrayAux[i] != arrayAux[j]){
			value = 0;	
		}
	}
	
	return value;

}
