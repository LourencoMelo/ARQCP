.section .data

.global even
.global num
.global ptrvec

.section .text 

.global test_even
.global vec_sum_even

########################################################################

test_even:

#prologue

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function

	movl even , %eax
	cdq
	
	movl $2, %ebx
	idivl %ebx
	cmpl $0, %edx
	je par
	
	movl $0, %eax
	jmp end
	
par:
	movl $1, %eax
	
end:
#epilogue 

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

vec_sum_even:

#prologue

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body of the function

	movl $0, %esi
	movl $0, %eax
	movl ptrvec, %edx
	movl num , %ebx
	movl $0, %ecx
	
array_loop:

	cmpl %ecx, %ebx
	je end_my_loop
	
	movl (%edx), %edi
	movl %edi, even
	pushl %ecx
	pushl %edx
	call test_even
	popl %edx
	popl %ecx
	
	cmpl $1,%eax
	je sum_evens
	
	addl $4, %edx
	incl %ecx
	jmp array_loop
	
sum_evens:

	addl (%edx), %esi
	addl $4, %edx
	incl %ecx
	jmp array_loop
	
end_my_loop:

	movl %esi, %eax
	
#epilogue 

popl %edi
popl %esi
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################





















