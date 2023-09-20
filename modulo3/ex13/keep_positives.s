.global .data

.global ptrvec
.global num

.section .text

.global keep_positives
keep_positives:

#prologue

	pushl %ebp
	movl %esp, %ebp
	pushl %esi
	pushl %edi
	
#body of the function

	movl ptrvec, %ebx
	movl $0, %eax
	
	movl $0, %esi
	movl num, %edi
	
	vec_loop:
		movl (%ebx), %ecx
		cmpl %esi, %edi
		je end_vec_loop
		
		cmpl $0, %ecx 
		jg negative_loop
		incl %esi
		
	negative_loop:
		movl %esi, (%edx)
		incl %esi
	
	end_vec_loop:

#epilogue 	

	popl %edi
	popl %esi 
	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

	ret  # return from the function




