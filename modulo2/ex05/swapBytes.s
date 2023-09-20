.section .data

.global s

.section .text
.global swapBytes

# short swapBytes(void)

swapBytes:

#prologue 
	pushl %ebp 
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function

	movl s, %eax
	movb %ah, %ch
	movb %al, %ah
	movb %ch, %al
	
#epilogue

	popl %ebx
	
	movl %ebp, %esp
	popl %ebp
	ret
