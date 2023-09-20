.section .data 

		.equ CONST, 15  # Inicializes the constant CONST

.global op1  # Turns op1 global
.global op2  # Turns op2 global

.section .text
.global sum_v2
sum_v2:  # Starts the function

#prologue:

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx
#body of the function

movl op1 , %ebx
movl op2 , %eax
subl $CONST, %ebx
subl $CONST, %eax
subl %ebx, %eax

#epilogue
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function




