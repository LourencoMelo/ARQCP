.section .text

.global inc_and_square
inc_and_square:

#prologue
	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function
	
	movl 12(%ebp), %eax
	movl 8(%ebp), %ecx
	
	incl (%ecx)
	imull %eax, %eax
	
	end:
	
#epilogue 
	pushl %ebx
	
	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

ret  # return from the function

