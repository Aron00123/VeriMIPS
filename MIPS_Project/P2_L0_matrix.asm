.data
matrix1: .space 256
matrix2: .space 256
matrix3: .space 256
space:.asciiz " "
enter:.asciiz "\n"

.macro return0
li $v0, 10
syscall
.end_macro

.macro scanf(%p) # scan int
li $v0, 5
syscall
move %p, $v0
.end_macro

.macro printf(%p)
move $a0, %p
li $v0, 1
syscall
.end_macro

.macro puts(%p)
la $a0, %p
li $v0, 4
syscall
.end_macro

.macro matrimult(%p0, %p1, %p2, %p3) # let p3 += p1 * p2
mult %p1, %p2
mflo %p0
add %p3, %p3, %p0
.end_macro

.macro getindex(%ans,%i,%j)
sll %ans, %i, 3
add %ans, %ans, %j
sll %ans, %ans, 2
.end_macro

.text
# input
scanf($s0) # scanf n to $s0

li $t0, 0
in_i1: # loop for raw
beq $t0, $s0, in_i_end1
li $t1, 0
in_j1: # loop for seq
beq $t1, $s0, in_j_end1
scanf($s1) # scan int to $s1
getindex($t2, $t0, $t1)
sw $s1, matrix1($t2) # save int to matrix
addi $t1, $t1, 1
j in_j1
nop
in_j_end1:
addi $t0, $t0, 1
j in_i1
nop
in_i_end1: # loop1 end

li $t0, 0
in_i2: # loop for raw
beq $t0, $s0, in_i_end2
li $t1, 0
in_j2: # loop for seq
beq $t1, $s0, in_j_end2
scanf($s1) # scan int
getindex($t2, $t0, $t1)
sw $s1, matrix2($t2) # save int to matrix
addi $t1, $t1, 1
j in_j2
nop
in_j_end2:
addi $t0, $t0, 1
j in_i2
nop
in_i_end2: # loop2 end

# caculate
li $t0, 0
in_i_cal:
beq $t0, $s0, in_i_calend
li $t1, 0
in_j_cal:
beq $t1, $s0, in_j_calend
li $t2, 0
li $s2, 0
in_k_cal:
beq $t2, $s0, in_k_calend
getindex($t3, $t0, $t2) # matrix1(i,k)
lw $s3, matrix1($t3)
getindex($t4, $t2, $t1) # matrix2(k,j)
lw $s4, matrix2($t4)
matrimult($t6, $s3, $s4, $s2) # $s2 += matrix1(i,k) * matrix2(k,j)
addi $t2, $t2, 1
j in_k_cal
nop
in_k_calend:
getindex($t3, $t0, $t1) # matrix3(i,j)
sw $s2, matrix3($t3)
addi $t1, $t1, 1
j in_j_cal
nop
in_j_calend:
addi $t0, $t0, 1
j in_i_cal
nop
in_i_calend: # loop cal end

# output
li $t0, 0
out_i:
beq $t0, $s0, out_i_end
li $t1, 0
out_j:
beq $t1, $s0, out_j_end
getindex($t2, $t0, $t1)
lw $s5, matrix3($t2)
printf($s5)
puts(space)
addi $t1, $t1, 1
j out_j
nop
out_j_end:
puts(enter)
addi $t0, $t0, 1
j out_i
nop
out_i_end:
return0
