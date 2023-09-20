.section .data

.global op1
.global op2

.section .text
.global test_flags

# short test_flags(void)

test_flags:

#prologue 
	pushl %ebp 
	movl %esp, %ebp
	
#body of the function

	movl op1, %ecx
	movl op2, %eax
	
	addl %eax, %ecx
	
	jo with_overflow 
	jc with_carry
	
	movl $0, %eax
	jmp fim
	
with_carry:
	movl $1, %eax
	jmp fim

with_overflow:
	movl $1, %eax	
	
#epilogue

fim:
	
	movl %ebp, %esp
	popl %ebp
	ret

