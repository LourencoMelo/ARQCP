.section .data

.global ptrvec
.global num

.section .text

.global vec_add_one
vec_add_one:

#prologue:

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function:

	movl num, %eax
	movl ptrvec, %edx
	movl $0, %ebx
	
array_loop:
	
	cmpl %eax, %ebx
	jge end_my_loop
	
	addl $1, (%edx)
	
	addl $4, %edx
	incl %ebx
	jmp array_loop
	
end_my_loop:

#epilogue 

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
	
	
		
