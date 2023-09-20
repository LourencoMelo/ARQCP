.section .data

.global i
.global j

.section .text

.global f1
.global f2
.global f3
.global f4

########################################################################

#body of the function f1
f1:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx

#body of the function:

	movl $0, %eax
	movl j, %ecx
	movl i, %ebx
	
	cmpl %ecx, %ebx
	je jump_if_equal
	
	addl %ecx, %ebx
	subl $1, %ebx
	movl %ebx, %eax
	jmp end
	
jump_if_equal:
	subl %ecx, %ebx
	addl $1, %ebx
	movl %ebx, %eax

#epilogue
end:
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
########################################################################
	
#body of the function f2
f2:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx	

#body fo the function:

	movl $0, %eax
	movl j, %ecx
	movl i, %ebx
	
	cmpl %ecx, %ebx
	jg jump_if_greater
	
	addl $1, %ecx
	jmp end2
	
jump_if_greater:
	subl $1, %ebx

end2:

	imull %ebx, %ecx
	movl %ecx, %eax

#epilogue
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
########################################################################

#body of the function f3
f3:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx

#body of the function:
    movl $0, %edx
	movl $0, %eax
	movl j, %ecx
	movl i, %ebx

	cmpl %ecx, %ebx
	jg jump_please
	je jump_please
	
	addl %ebx, %ecx ##h
	addl $2, %ecx
	movl %ecx, %eax ##g
	
	cdq
	jmp end3
	
jump_please:
	imull %ebx, %ecx #h
	addl $1, %ebx 
	movl %ebx, %eax #g
	
	cdq

end3:	
	cmpl $0, %ecx
	je jump_if_equal3
	idivl %ecx
	jmp veryend

jump_if_equal3:
	movl $0, %eax

#epilogue	
veryend:
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
########################################################################

#body of the function f4
f4:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx	

#body fo the function:

	movl j, %ecx
	movl i, %ebx
	
	movl %ecx, %eax
	addl %ebx, %eax
	cmpl $10, %eax
	jl jump_if_lower
	movl $0, %eax
	
	movl %ecx, %eax
	imull %ecx, %eax
	cdq
	
	movl $3, %ebx
	cmpl $0, %ebx
	je jump_if_equal4
	idivl %ebx
	jmp end

jump_if_equal4:
	movl $0, %eax
	jmp end	
	
jump_if_lower:
	movl %ebx, %eax
	imull $4, %eax
	imull %ebx, %eax
	
#epilogue
end4:
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
	
########################################################################
