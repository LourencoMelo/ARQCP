.section .data

.equ HORAS_SEMANAIS_OFFSET, 4  #Offset is 4
.equ SALARIO_HORA_OFFSET, 8  #Offset is 8

.section .text

.global calcula_subsidio_ferias
calcula_subsidio_ferias:
	
	#prologue
	
	pushl %ebp
	movl %esp, %ebp
	
	#save calle
	
	pushl %edi
	pushl %esi
	pushl %ebx

	#body of the function
	
	movl 8(%ebp), %ecx 
	addl $HORAS_SEMANAIS_OFFSET,%ecx # pointer to the offset
	movw (%ecx), %ax
	
	movl 8(%ebp), %ecx
	addl $SALARIO_HORA_OFFSET, %ecx  #pointer to the offset
	movl (%ecx), #ebx #moving the content to ebx
	
	imulw $52, %ax  #multiplying 52 weeks
	
	idivw $12  #dividing 12 months
	
	movswl %ax, %eax
	cdq 	#for negative numbers...
	
	imull %ebx, %eax #salariohora x total
		
end:
	#restore calle
	popl %ebx
	popl %esi
	popl %edi
	
	#epilogue 
	movl %ebp, %esp
	popl %ebp

ret
