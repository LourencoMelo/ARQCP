.section .text

.global greatest
greatest:

#prologue
	push %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function
	
	movl 16(%ebp), %edx
	movl 12(%ebp), %ecx
	movl 8(%ebp), %ebx
	
	movl %ebx, %eax  #%eax e o maximo
	cmpl %eax, %ecx
	jg x
	loop2:
		cmpl %eax, %edx
		jg y
		jmp end_loop
	
	x:
		movl %ecx, %eax
		jmp loop2
	y:
		movl %edx, %eax
	
	end_loop:

#epilogue 

	popl %ebx

	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

ret  # return from the function
