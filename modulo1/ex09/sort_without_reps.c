int placed = 0;

int sort_without_reps(int *src, int n, int *dest){
	
    int value;
    int loop; 
    int loop2; 
    int i; 
    int j; 
    int valo; 
    int size;
    
	
	for (loop = 0; loop < n; loop ++){  
        loop2 = 0;
        value = 1;
        while (loop2 < loop){
            if(*(src + loop) == *(src + loop2)){
                value = 0;
            }
         loop2 ++; 
        }   
        if(value == 1){
            *(dest + placed) = *(src + loop);
            placed ++;
        }
	}
      
    size = placed;

	for (i=0; i < size; i++){    
        for (j = i+1; j < size; j++){ 
            if (*(dest + j) < *(dest + i)) { 
				valo = *(dest + i); 
                *(dest + i) = *(dest + j); 
                *(dest + j) = valo; 

            }
        }
    }
    return placed;
}
