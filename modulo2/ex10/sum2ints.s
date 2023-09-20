.section data

.global op1 #Turns op1 global
.global op2	#Turns op2 global

.section .text
.global sum2ints
sum2ints: 	#Starts the function

#prologue:  

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx

#body of the function:


movl op1, %ebx
movl op2, %eax
addl %ebx, %eax

movl $0, %edx
adcl $0, %edx

cdq

#epilogue
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
