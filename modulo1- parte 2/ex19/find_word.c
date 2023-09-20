#include <string.h>
#include <stdio.h>

char* find_word(char* str, char* word, char* initial_addr){
	char *adress;
	int i = 0;
	char strAux[strlen(str)];
	char wordAux[strlen(word)];
	
	if(*(str+i) == '\0'){
        return adress = '\0';
    }
    
    if(*(word+i) == '\0'){
        return adress = '\0';
    }
    
	for(i = 0; i < strlen(str); i ++){
            strAux[i] = str[i];
	}
    
    for(i = 0; i < strlen(str); i ++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
		}
	}
	
	for(i = 0; i < strlen(word); i ++){
            wordAux[i] = word[i];
	}
	
	for(i = 0; i < strlen(word); i ++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = word[i] + 32;
		}
	}

	adress = strstr(initial_addr, word);
	
	for(i = 0; i < strlen(str); i ++){
            str[i] = strAux[i];
	}
	
	for(i = 0; i < strlen(word); i ++){
            word[i] = wordAux[i];
	}
	
	return adress;

}
