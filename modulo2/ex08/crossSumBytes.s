.section .data

s1:
	.short 0xEA

s2:
	.short 0x08


.global s1
.global s2

.section .text
.global crossSumBytes

crossSumBytes:

#prologue

	pushl %ebp 
	movl %esp, %ebp
	
	pushl %ebx

#body of the function

	movl $0, %eax
    movl s1, %ecx
    movl s2, %edx
    
	movb %ch, %ah
	addb %dl, %ah
	movb %cl, %al
	addb %dh, %al
	
#epilogue
	
	popl %ebx
	
	movl %ebp, %esp
    popl %ebp
    ret
