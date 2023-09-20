.section .data

.global ptrvec
.global num

.section .text

.global vec_zero
vec_zero:

#prologue:

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi

	
#body of the function

	movl $0, %eax
	movl num, %esi
	movl ptrvec, %edx
	movl $0, %ebx
	
array_loop:

	cmpl %esi, %ebx
	je end_my_loop
	
	movw (%edx), %cx
	cmpw $100, %cx
	jge zeroes
	
	incl %ebx
	addl $2, %edx
	jmp array_loop

zeroes:

	movw $0, (%edx)
	incl %eax
	incl %ebx
	addl $2, %edx
	jmp array_loop

end_my_loop:
#epilogue 
	
	popl %esi
	popl %ebx

	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

	ret  # return from the function	
