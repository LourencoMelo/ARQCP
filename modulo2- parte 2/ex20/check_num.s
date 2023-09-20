.section .data

.global num #turn the variable global

.section .text
.global check_num #starts the function global

check_num: #starts the function

#prologue 
	pushl %ebp 
	movl %esp, %ebp
	pushl %ebx
	
#body of the function
	
	movl num, %ecx
	movl num, %eax
	cdq
	
	movl $2, %ebx
	idivl %ebx
	cmpl $0, %edx
	
	je even
	jmp odd
	
	#EVEN NUMBERS (POSITIVE AND NEGATIVE)
	even:
	
		cmpl $0, %ecx
		jl negative_even
		jmp positive_even
	
	#ODD NUMBERS(POSITIVE AND NEGATIVE)	
	odd:
		
		cmpl $0, %ecx
		jl negative_odd
		jmp positive_odd
		
	#POSITIVE EVEN
	positive_even:
		movl $3, %eax
		jmp end
		
	#NEGATIVE EVEN
	negative_even:
		movl $1, %eax
		jmp end
		
	#POSITIVE ODD
	positive_odd:
		movl $4, %eax
		jmp end
		
	#NEGATIVE ODD
	negative_odd:
		movl $2, %eax
		jmp end
		
#epilogue

end:
	popl %ebx
	movl %ebp, %esp
	popl %ebp
	ret
	
