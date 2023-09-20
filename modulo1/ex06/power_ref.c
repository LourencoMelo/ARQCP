#include <math.h>

void power_ref(int* x, int y){
	double power = 0;
	/*int cont = 0;
	while(cont =! y){
		if(y > 0){
			power = power * (*x);
			cont ++;
		}else{
			if(y < 0){
				power = power * ( 1 / (*x));
				cont --;
			}else{
				power = 1;
				cont = y;
			}
		}
	}*/
	
	power = round(pow((*x),y));

	*x = power;
	/*int *ptr;
	ptr = x;
	*ptr = power;
	* */
}
