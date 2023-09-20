.section .data

.global ptr1
.global ptr2
.global ptr3

.section .text

.global str_cat
str_cat:

#prologue

	pushl %ebp
	movl %esp, %ebp
	
	pushl %ebx
	pushl %esi

#body of the function

	movl ptr1, %edx
	movl ptr2, %ebx
	movl ptr3, %esi
	
string_loop:

	movb (%edx), %cl
	cmpb $0, %cl
	je second_loop
	
	movb %cl, (%esi)
	
	incl %edx
	incl %esi
	jmp string_loop
	
second_loop:

	movb (%ebx), %cl
	cmpb $0, %cl
	je end_loop
	
	movb %cl, (%esi)
	
	incl %ebx
	incl %esi
	jmp second_loop
	
end_loop:

	movb $0, (%esi)

#epilogue 

popl %esi
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
	
	
