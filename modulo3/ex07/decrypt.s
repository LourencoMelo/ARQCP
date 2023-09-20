.section .data

.global ptr1

.section .text

.global decrypt
decrypt:


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
		je string_loop_end
		
		cmpb $'a', %cl
		je decrypt1
		cmpb $' ', %cl
		je decrypt1
		jmp increment
		
	decrypt1:
		addl $2, %eax
		
		
	increment:
		incl %edx
		jmp string_loop
		
	string_loop_end:
	
#epilogue 

popl %ebx
movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
