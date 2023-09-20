.section .data

.global A
.global B

.section .text
.global sum
.global sub
.global mult
.global div
.global mod
.global powerone
.global powertwo

########################################################################

#body of the function sum that has the porpuse of sum two int's
sum:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl A, %eax
movl B, %ecx
addl %ecx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function sub that has the porpuse of subtract two int's
sub:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl A, %eax
movl B, %ecx
subl %ecx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function mult that has the porpuse of multiplie two int's
mult:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl A, %eax
movl B, %ecx
imull %ecx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function div that has the porpuse of divide two int's
div:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl $0, %edx
movl A, %eax

cdq

movl B, %ecx
cmpl $0, %ecx
je jump_is_equal
idivl %ecx
jmp end

jump_is_equal: 
	movl $0, %eax
	
#epilogue
end:


movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function mod that has the porpuse of calculate modules
mod:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function

    movl $0, %edx
    movl A, %eax
    movl B, %ecx

    idivl %ecx

    movl %edx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function powerone that has the porpuse of power 2
powerone:

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl A, %eax
movl A, %ecx
imull %ecx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################

#body of the function powerone that has the porpuse of power 3
powertwo:
#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

#body of the function:

movl A, %eax
movl A, %ecx
imull %ecx, %eax
movl A, %edx
imull %edx, %eax

#epilogue

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

########################################################################
