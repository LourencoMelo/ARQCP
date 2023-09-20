.section .data

.global A
.global B
.global C
.global D

.section .text
.global sum_and_subtract

sum_and_subtract:

#prologue

	pushl %ebp 
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function

	movl C, %eax

    movl $0, %ecx
    movb A, %cl
    movsbl %cl, %ecx

    addl %ecx, %eax
    
    #movl $0, %edx
    #adcl $0, %edx

    movl D, %edx

    subl %edx, %eax
    
    #movl $0, %edx
    #adcl $0, %edx

    movl $0, %ebx
    movw B, %bx
    movswl %bx, %ebx

    addl %ebx, %eax

    #movl $0, %edx
    #adcl $0, %edx

    cdq

    
#epilogue
	
	popl %ebx
	
	movl %ebp, %esp
    popl %ebp
    ret

	
