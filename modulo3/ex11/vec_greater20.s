.section .data

.global ptrvec
.global num

.section .text

.global vec_greater20
vec_greater20:

#prologue

	pushl %ebp
	movl %esp, %ebp
	pushl %esi
	pushl %edi
	pushl %ebx
	
#body of the function

	movl ptrvec, %edx
	movl $0, %eax
	
	movl $0, %esi
	movl num, %edi
	movl $20, %ebx
	
	vec_loop:
		movl (%edx), %ecx
		cmpl %esi, %edi
		je end_vec_loop
		
		cmpl %ebx, %ecx 
		jg greater20_a
		
		addl $4, %edx
		cmpl %ebx, %ecx
		jg greater20_b
		incl %esi
		addl $4, %edx
		jmp vec_loop
		
	greater20_a:
		addl $1, %eax	
		incl %esi
		addl $8, %edx
		jmp vec_loop
		
	greater20_b:
		addl $1, %eax
		incl %esi
		addl $4, %edx
		jmp vec_loop
		
		
	end_vec_loop:
	
#epilogue 

popl %ebx
popl %edi
popl %esi
movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

	

