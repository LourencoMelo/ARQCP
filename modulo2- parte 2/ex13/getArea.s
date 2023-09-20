.section data

.global base #turns base into a global variable
.global height #turns height into a global variable

.section .text
.global getArea
getArea: #Starts the fuction

#prologue:

pushl %ebp   # save previous stack frame pointer
movl %esp, %ebp  # the stack frame pointer for our function

pushl %ebx

#body of the function:

movl $0, %edx ################
movl height, %eax
movl base, %ebx
imull %ebx, %eax
movl $2, %ecx
divl %ecx

#epilogue
popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function

