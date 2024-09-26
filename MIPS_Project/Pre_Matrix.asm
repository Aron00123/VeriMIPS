.data
space: .asciiz  " "          # space to insert between numbers
enter: .asciiz "\n"
matrix: .space 10000
triple: .space 30000

.macro getint(%pos)
li $v0, 5
syscall
move %pos, $v0
.end_macro

.text
getint($s0) #输入行数
addi $s0, $s0, 1
getint($s1) #输入列数
addi $s1, $s1, 1
li $t3, 0 #存储索引1
li $t4, 0 #存储索引2
li $t5, 0 #存储索引3

li $t0, 1 #行数
in_i:
beq $t0, $s0, in_i_end
li $t1, 1 #列数
in_j:
beq $t1, $s1, in_j_end
li $v0, 5
syscall
bne $v0, 0, save
in_return:
addi $t1, $t1, 1
j in_j
in_j_end:
addi $t0, $t0, 1
j in_i
in_i_end:
#输出循环
out_index:
beq $t3 ,$0, end
addi $t3, $t3, -12
lw $a0, triple($t3)
li $v0, 1
syscall
la $a0, space
li $v0, 4
syscall
addi $t4, $t3, 4
lw $a0, triple($t4)
li $v0, 1
syscall
la $a0, space
li $v0, 4
syscall
addi $t5, $t4, 4
lw $a0, triple($t5)
li $v0, 1
syscall
la $a0, enter
li $v0, 4
syscall
j out_index
end:
#结束程序
li ,$v0, 10
syscall


save:
sw $t0, triple($t3)
addi $t4, $t3, 4
sw $t1, triple($t4)
addi $t5, $t4, 4
sw $v0, triple($t5)
addi $t3, $t5, 4
j in_return


