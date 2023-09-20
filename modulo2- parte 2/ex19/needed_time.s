.section .data

.global current
.global desired 

.section .text
.global needed_time

needed_time:

#prologue
	
	pushl %ebp 
	movl %esp, %ebp
	
	pushl %ebx
	
#body of the function

	movl $0, %eax
	movw current, %bx
	movw desired, %cx
	
	cmpw %cx, %bx
	jg jump_if_greater
	je jump_if_equal
	jl jump_if_less

########################################################################	

jump_if_greater:
	subw %cx, %bx
	movswl %bx, %ebx
	imull $180, %ebx
	movl %ebx, %eax
	jmp end
	
########################################################################	

jump_if_equal:
	movl $0, %eax
	jmp end
	
########################################################################

jump_if_less:
	subw %bx, %cx
	movswl %cx, %ecx
	imull $120, %ecx
	movl %ecx, %eax

########################################################################

#epilogue 
end:

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
		
	
	
	
	
	
