.section .data 
op1:
		.int 0
op2:
		.int 0

.global op1
.global op2

.section .text
.global sum
sum:

#prologue

pushl %ebp
movl %esp, %ebp

#body of the function

movl op1 , %ebx
movl op2 , %eax
addl %ebx, %eax

#epilogue

movl %ebp, %esp
popl %ebp

ret
