.section .data

.global ptrvec
.global searchedNumber

.section .text

.global vec_search
vec_search:

#prologue

	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %edi
	
#body of the function

	movl ptrvec, %edx
	movl $0, %eax
	
	movl $0, %esi
	movl $6, %edi
	movl searchedNumber, %ebx
	
	vec_loop:
		movl (%edx), %ecx
		cmpl %esi, %edi
		je end_vec_loop
		cmpl %ecx, searchedNumber
		je found_number
		addl $4, %edx
		incl %esi
		jmp vec_loop
			
	found_number:
		movl %esi, %eax
		jmp end_vec_loop
		

	end_vec_loop:
	
#epilogue 

popl %edi
popl %ebx
movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

	
