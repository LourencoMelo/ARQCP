.section .data

.equ OFFSET_EFETUADO, 20  #WHERE CHAR EFETUADO IS LOCATED IN STRUCURE


.section .text

.global calcula_subsidio
calcula_subsidio:
	
	#prologue
	
	pushl %ebp
	movl %esp, %ebp
	
	#save calle
	
	pushl %edi
	pushl %esi
	pushl %ebx

#body of the function

	movl 8(%ebp), %esi #Moves the pointer to the structure to esi
	movl 12(%ebp), %ebx #moves the integer of number of employees to ebx
	
	addl $OFFSET_EFETUADO, %esi		#Displaces to char efetuado
	
loop_of_empregados:
	cmpl $0, %ebx   #checks if the there is no more employees
	je end 			#if there is no more employees 
	
	movb (%esi), %ecx #Moves the content to %ecx
	cmpl $1, %ebx	#Compare if the subsidio already was calculated
	je subsidio_already_calculated
	
	#prevent passing registers with content
	pushl %esi   #push first being used
	pushl %ebx	 #push second being used
	pushl %ecx 	#push third being used
	call calcula_subsidio_ferias  #calls the first function
	popl %ecx	#pops third being used
	popl %ebx	#pops second being used
	popl %esi	#pops first being used
	
	decl %ebx #decrements the number of employees calculated(after calling the function)
	
	addl $OFFSET_EFETUADO, %esi
	
	movb $1, (%esi)
	
	addl $12, %esi
	
subsidio_already_calculated:
	incl %esi  #Moves to the next employee
	decl %ebx #Decrements the "number"(i) of employees
		
end:
	#restore calle
	popl %ebx
	popl %esi
	popl %edi
	
	#epilogue 
	movl %ebp, %esp
	popl %ebp

ret
