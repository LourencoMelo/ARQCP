.section .data

.section .text
.global calculate

calculate:

#prologue 

	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	
#body of the function
	
	movl 8(%ebp), %ecx #n1
	movl 12(%ebp), %eax #n2
	
	movl %eax, %ebx
	movl %eax, %edx
	
	addl %ecx, %ebx
	
	imull %ecx, %edx
	
	subl %edx, %ebx
	cdq
	
	movl %ebx ,%eax
	
	end:
	
#epilogue 
	
	popl %ebx
	movl %ebp, %esp
	popl %ebp
	
	ret #return of the funtcion
