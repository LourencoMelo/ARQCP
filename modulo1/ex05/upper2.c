void upper2(char *str){
    int i;
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        str++;
    }
}
