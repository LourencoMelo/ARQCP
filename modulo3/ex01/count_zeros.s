.section .bss

.comm ptr1,4
.global ptr1

.section .text

.global count_zeros
count_zeros:
#prologue 
	pushl %ebp
	movl %esp, %ebp
	push %esi
	
#body of the function
	movl ptr1, %esi; #move o endereço da array para o registo %esi
	movl $0, %eax; #limpa a variavel de retorno
	
	str_loop:
		movb (%esi), %cl #copy char from str1 (pointed by %esi) to %cl
		cmpb $0, %cl #verifica se está no final da array
			je str_loop_end 
			
		cmpb $'0', %cl #Compara se o numero é zero 
		je is_zero
			incl %esi
			jmp str_loop
			
		is_zero:	
			incl %eax #Aumenta um valor no contador de zeros
			incl %esi #Avança uma posição na array
			jmp str_loop #Salta para o inicio do loop
			
	str_loop_end: #acaba o looop
	
#epilogue
	pop %esi
	movl %ebp, %esp
	popl %ebp
	
	ret
