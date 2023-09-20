.section data

.global A
.global B
.global C
.global D

.section .text
.global compute
compute: #Starts the fuction

#prologue

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx
pushl %esi
#body of the function:

movl $0, %edx
movl A, %eax
movl B, %ebx
movl C, %ecx
imull %ebx, %eax
addl %ecx, %eax

cdq

movl D, %esi
cmpl $0, %esi
je jump_is_equal
idivl %esi
jmp end

jump_is_equal: 
	movl $0, %eax

#epilogue
end:

popl %esi
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
