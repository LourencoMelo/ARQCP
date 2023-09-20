.section .text

.global count_even
count_even:

#prologue
	push %ebp
	movl %esp, %ebp
	
	push %ebx
	push %esi
	push %edi
	
	
#body of the function

	movl 8(%ebp), %ebx #Base address
	movl 28(%ebp), %esi #num to esi
	movl $0, %eax #reset return value
	movl $0, %edi #reset pre-return value
	
	array_loop:
	cmpl %eax, %esi
	je end_loop
	movl (%ebx, %eax, 4), %ebx
	addl $1, %eax
	movl $2, %ecx
	divl %ebx
	cdq
	movl $0, %ebx
	cmpl $0, %edx
	je is_even
	jmp array_loop
	
	is_even:
		inc %edi #inc the total even numbers in the array
		jmp array_loop

	end_loop:
		movl $0, %eax
		movl %edi, %eax
	
#epilogue
	
	popl %edi
	popl %esi
	popl %ebx

	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

ret  # return from the function
