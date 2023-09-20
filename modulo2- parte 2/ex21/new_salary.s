.section .data

.global code #turns the code into a global variable
.global currentSalary #turns the currentSalary into a global variable

.section .text
.global new_salary #turns the function global

new_salary: #starts the function

#prologue

pushl %ebp 
movl %esp, %ebp

pushl %ebx

#body of the function

movl $0, %eax
movl code, %ecx
movl currentSalary, %ebx

cmpl $10, %ecx
je jump_if_Manager

cmpl $11, %ecx
je jump_if_Engineer

cmpl $12, %ecx
je jump_if_Technician

addl $100, %ebx
movl %ebx, %eax

jmp end

jump_if_Manager:

	addl $300, %ebx
	movl %ebx, %eax
	jmp end

jump_if_Engineer:

	addl $250, %ebx
	movl %ebx, %eax
	jmp end
	
jump_if_Technician:

	addl $150, %ebx
	movl %ebx, %eax

#epilogue
end:

popl %ebx

movl %ebp, %esp  # restore the stack pointer 
popl %ebp  # restore the stack frame pointer

ret  # return from the function




