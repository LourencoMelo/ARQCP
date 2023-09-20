.section .data

.global ptr1
.global ptr2

.section .text

.global str_copy_porto
str_copy_porto:

#prologue

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx

#body of the function

	movl ptr1, %edx
	movl ptr2, %ebx
	
string_loop:
	movb (%edx), %cl
	cmpb $0, %cl 
	je end_loop
	
	cmpb $'v', %cl
	je jump_if_equal
	
	movb %cl, (%ebx)
	jmp part1
	
jump_if_equal:
	
	movb $'b', (%ebx)

part1:	

	incl %edx
	incl %ebx
	jmp string_loop
	
end_loop:

movb $0, (%ebx)
#epilogue 

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
	
