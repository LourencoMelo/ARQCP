.section data

.global ptrvec
.global vec_avg

.section .text

.global vec_sum
vec_sum:

#prologue

	pushl %ebp
	movl %esp, %ebp
	pushl %esi
	
#body of the function
	
	movl ptrvec, %edx
	movl $0, %eax
	
	movl $0, %esi
	
	string_loop:
		
		movl (%edx),%ecx
	
		cmpl %esi, num 
		je string_loop_end
		addl %ecx, %eax
		incl %esi
		addl $4, %edx
		jmp string_loop
		
	
	string_loop_end:

#epilogue 

popl %esi
movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret

vec_avg:

#prologue

	pushl %ebp
	movl %esp, %ebp

	
#body of the function	
	
	movl $0, %eax
	
	cmpl $0, num
	je end
	call vec_sum
	cdq
	
	idivl num
	
end:
	
#epilogue 


movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret #returnfrom the function

