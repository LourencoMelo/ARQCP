.section data

.global op1 #Turn op1 global
.global op2 #Turn op2 global
.global op3 #Turn op3 global
.global op4 #Turn op4 global

.section .text

.global sum_v3
sum_v3: 	#Starts the function

#prologue:

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function
pushl %ebx

#body of the function

movl op2 , %ebx;
addl op1 , %ebx;
movl op4 , %eax;
addl op3 , %eax;
subl %ebx , %eax;

#epilogue
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function
