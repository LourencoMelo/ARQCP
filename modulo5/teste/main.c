#include <stdio.h>
#include "subsidio.h"
#include "stdlib.h"   
#include "string.h"

int main(void){
	
	int num_emp = 4;
	
	empregado *ptr_emp = (empregado *) calloc(4, sizeof(empregado));
	
	ptr_emp[0].nome = (char *) calloc (60, sizeof(char));
	ptr_emp[1].nome = (char *) calloc (60, sizeof(char));
	ptr_emp[2].nome = (char *) calloc (60, sizeof(char));
	ptr_emp[3].nome = (char *) calloc (60, sizeof(char));
	
	strcpy(ptr_emp[0].nome , "Manel das Couves");	#nome of the employees
	strcpy(ptr_emp[1].nome , "Maria Cotovia");
	strcpy(ptr_emp[2].nome , "Artur Dentinho");
	strcpy(ptr_emp[3].nome , "Tio Patinhas");
	
	ptr_emp[0].salario_hora = 10;		#salario of the employees
	ptr_emp[1].salario_hora =12;
	ptr_emp[2].salario_hora = 9;
	ptr_emp[3].salario_hora = 2147483647;
	
	ptr_emp[0].subsidio_ferias = 0;		#initialize subsidio_ferias with 0
	ptr_emp[1].subsidio_ferias = 0;
	ptr_emp[2].subsidio_ferias = 0;
	ptr_emp[3].subsidio_ferias = 0;
		
	ptr_emp[0].horas_semanais = 40;		#horario_semanais of employees
	ptr_emp[1].horas_semanais = 45;		
	ptr_emp[2].horas_semanais = 35;
	ptr_emp[3].horas_semanais = 10;
	
	ptr_emp[0].efetuado = 0;		#initialize efetuado
	ptr_emp[0].efetuado = 0;
	ptr_emp[0].efetuado = 0;
	ptr_emp[0].efetuado = 0;
	
	calcula_subsidio(ptr_emp, number_empregados);
	
	int i;
	
	for(i = 0; i < number_empregados){				#print
		printf("Nome : %s", ptr_emp.name[i]);
		printf("Horas Semanais : %hd", ptr_emp.salario_hora[i]);
		printf("Salario hora : %d", ptr_emp.subsidio_ferias[i]);
		printf("Subsidio ferias : %lld", ptr_emp.horas_semanais[i]);
	}
	
	return 0;
}
