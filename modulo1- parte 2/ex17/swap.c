void swap(int* vec1, int* vec2, int size){
	int i = 0;
	int j = 0;
	int vecAux[size];
	
	for(i = 0, j= 0; i < size ; i ++, j ++){
		*(vecAux + i) = *(vec1 + j);
	}
	
	for(i = 0, j= 0; i < size ; i ++, j ++){
		*(vec1 + i) = *(vec2 + j);
	}
	
	for(i = 0, j= 0; i < size ; i ++, j ++){
		*(vec + i) = *(vecAux + j);
	}
	
}
