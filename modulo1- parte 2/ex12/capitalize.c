void capitalize(char *str){
	
	if(*str >= 'a' && *str <= 'z'){
		*str = *str - 32;
    }
    
    while(*str != '\0'){
		if(*str == ' '){
			if(*(str + 1) >= 'a' && *(str +1) <= 'z'){
				*(str + 1) = *(str + 1) - 32;
			}
		}	
		str++;
    }
}
