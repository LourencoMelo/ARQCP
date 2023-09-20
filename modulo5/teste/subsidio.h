#include "subsidio_ferias.h"

typedef struct{
	char *nome;
	short horas_semanais;
	int salario_hora;
	long long int subsidio_ferias;
	char efectuado;
} empregado;

void calcula_subsidio(empregado *dados, int numero_empregados);
