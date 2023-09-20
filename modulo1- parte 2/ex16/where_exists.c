char* where_exists(char* str1, char* str2){
	int i;
	int j;
	int sum = 0;
	int size = (*int)(sizeof(*str1) / sizeof(char));
	int size2 = (*int)(sizeof(*str2) / sizeof(char));
	int location = 0;
	
	while(i < size){
		while(((*str1+i)!=(*str2+sum))&&((sum<size2))){
			sum ++;
		}
		while((((*str1+i))==(*str2+sum))&&(sum<size2)){
			sum ++;
			i ++;
			if(((*str1+i)!=(*str2+sum))){
				i = 0;
			}
		}
	}
	
	location = (sum -size);
	
	return(*str2 + location);
}
