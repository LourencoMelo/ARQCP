.section .data

.global num  #turn the variable num global

.section .text
.global steps #turns the function global

steps:   #Starts the function

#prologue 
	pushl %ebp 
	movl %esp, %ebp
	pushl %ebx
	
#body of the function 

	movl $0, %edx

	movl $3, %ebx
	movl num, %eax
	imull %ebx, %eax
	cdq
	
	addl $6, %eax
	cdq
	
	movl $3, %ebx
	idivl %ebx
	cdq
	
	addl $12, %eax
	
	subl num, %eax
	
	decl %eax
	
#epilogue

fim:
	popl %ebx
	movl %ebp, %esp
	popl %ebp
	ret
	
	
