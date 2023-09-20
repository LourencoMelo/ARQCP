.section .text

.global cube
cube:

#prologue
	push %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
	movl 8(%ebp), %ebx
	movl %ebx, %eax
	
#body of the function
	
	imull %ebx, %eax
	imull %ebx, %eax
	
#epilogue 

	popl %ebx
	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

ret  # return from the function
