.section .data

.global ptrvec
.global num

.section text

.global array_sort
array_sort:

#prologue

	pushl %ebp
	movl %esp, %ebp
	pushl %esi
	pushl %edi
	pushl %ebx
	
#body of the function
	
	movl ptrvec, %edx
	
	movl num, %esi
	movl num, %di
	
	int_loop1:
		cmpl $0, %esi
		je end_int_loop1
		addl $20, %edx
		jmp int_loop2
	
	int_loop3:
		decl %esi
		movl num, %di
		jmp int_loop1
	
	int_loop2:
		cmpl $0, %di
		je jmp int_loop3
		movl (%edx), %ecx
		subl $4, %edx
		movl (%edx), %eax
		cmpl %eax, %ecx
		jg int_loop4
		decl %di
		
	int_loop4:
		movl %ecx, (%edx)
		decl %di
		
	end_int_loop1:
	
#epilogue 

popl %ebx
popl %edi
popl %esi
movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret #return of the function
