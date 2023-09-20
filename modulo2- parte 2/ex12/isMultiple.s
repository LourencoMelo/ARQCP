.section .data

.global A
.global B

.section .text
.global isMultiple

#body of the function
isMultiple:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function

movl $0, %edx
movl A, %eax    
movl B, %ecx    

cmpl $0, %ecx	
jl jump_one	

cmpl $0, %ecx	
je jump_one	
	
idivl %ecx    

cmpl $0, %edx	
je jump_two
	
jump_one:	
	movl $0, %eax
	jmp end
	
jump_two:
	movl $1, %eax

#epilogue
end:
	movl %ebp, %esp  # restore the stack pointer 
	popl %ebp  # restore the stack frame pointer

	ret  # return from the function
