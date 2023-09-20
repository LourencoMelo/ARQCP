.section .data

.global ptr1

.section .text

.global encrypt

encrypt:

#prologue

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function

	movl ptr1, %edx
	movl $0, %eax
string_loop:

	
	movb (%edx), %cl
	cmpb $0, %cl 
	je end_loop
	
	cmpb $'a', %cl
	je dont_add
	cmpb $' ', %cl
	je dont_add
	
	
	addb $2, (%edx)
	incl %eax
	
dont_add:

	incl %edx
	jmp string_loop
	
end_loop:
#epilogue 

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
