#include <stdio.h> //include to printf
#include <time.h> //include to the function gera_numeros
#include <stdlib.h> //Another include to the function gera_numeros

int main(void){
int tabuleiro[5] = {0xF0FC8D0A,0xF0ACFD0A,0x50F58D5A,0xFA058D0A,0xF0058D05}; //Hexadecimals introduced into the array tabuleiro
int jogadores[3] = {1,2,3}; //Where the IDs are set on "jogadores"
int i = 0; //Defining int 0
int posicao, rotacao, aposta, valorFinal; //Initializing posicao, rotação, aposta, valorFinal

    while(i < 3){
    posicao = gera_numeros(4) << 2; //Genarating the posicao and then shifting 2 bits to the left
    rotacao = gera_numeros(31) << 5; //Generating the rotation and then shifting 5 bits to the left
    aposta = gera_numeros(100) << 10; //Genarating the rotation and then shifting 10 bits to the left

    jogadores[i] |= posicao | rotacao | aposta; //Doing a or with every numbers to create the number in array jogadores correctly
    i ++;
    }
return 0;
}
int j;
	for(j = 0,j < 3, j++){
		printf("Result: %d", jogadores[j]);
	}
//Funtion gera numero to create randomly the numbers of posicao, rotacao and aposta
int gera_numeros(int n){
    srand(time(NULL)* rand());

return rand() % n;
 }
