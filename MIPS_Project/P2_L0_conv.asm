.data
matrix1: .space 1600
matrix2: .space 1600
matrix3: .space 1600
enter: .asciiz "\n"
space: .asciiz " "

.macro return0
li $v0, 10
syscall
.end_macro

.macro scanf(%p) # scan int
li $v0, 5
syscall
move %p, $v0
.end_macro

.macro printf(%p) # print int
move $a0, %p
li $v0, 1
syscall
.end_macro

.macro puts(%p) # put string
la $a0, %p
li $v0, 4
syscall
.end_macro

.macro getindex(%ans,%i,%j)
sll %ans, %i, 4
add %ans, %ans, %j
sll %ans, %ans, 2
.end_macro

.macro matrimult(%p0, %p1, %p2, %p3) # let p3 += p1 * p2
mult %p1, %p2
mflo %p0
add %p3, %p3, %p0
.end_macro

.text
# input
scanf($s0) # m1
scanf($s1) # n1
scanf($s2) # m2
scanf($s3) # n2
sub $s4, $s0, $s2
addi $s4, $s4, 1 # m3
sub $s5, $s1, $s3
addi $s5, $s5, 1 # n3

li $t0, 0
in_i1: # loop for raw
beq $t0, $s0, in_i_end1
li $t1, 0
in_j1: # loop for seq
beq $t1, $s1, in_j_end1
scanf($t3) # scan int to $s4
getindex($t2, $t0, $t1)
sw $t3, matrix1($t2) # save int to matrix1
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
beq $t0, $s2, in_i_end2
li $t1, 0
in_j2: # loop for seq
beq $t1, $s3, in_j_end2
scanf($t3) # scan int to $s4 (temp)
getindex($t2, $t0, $t1)
sw $t3, matrix2($t2) # save int to matrix2
addi $t1, $t1, 1
j in_j2
nop
in_j_end2:
addi $t0, $t0, 1
j in_i2
nop
in_i_end2: # loop2 end

#caculate
li $t0, 0
for_ibegin: # loop for i
beq $t0, $s4, for_iend
li $t1, 0
for_jbegin: # loop for j
beq $t1, $s5, for_jend
li $s6, 0 # result(i,j)
li $t2, 0
for_kbegin: # loop for k
beq $t2, $s2, for_kend
li $t3, 0
for_lbegin: # loop for l
beq $t3, $s3, for_lend
add $t4, $t0, $t2 # i + k
add $t5, $t1, $t3 # j + l
getindex($t6, $t4, $t5)
getindex($t7, $t2, $t3)
lw $t8, matrix1($t6)
lw $t9, matrix2($t7)
matrimult($t7, $t8, $t9, $s6)
addi $t3, $t3, 1
j for_lbegin
nop
for_lend:
addi $t2, $t2, 1
j for_kbegin
nop
for_kend:
getindex($t6, $t0, $t1) # index of result
sw $s6, matrix3($t6)
addi $t1, $t1, 1
j for_jbegin
nop
for_jend:
addi $t0, $t0, 1
j for_ibegin
nop
for_iend: # caculate end

# output
li $t0, 0
out_i:
beq $t0, $s4, out_iend
li $t1, 0
out_j:
beq $t1, $s5, out_jend
getindex($t2, $t0, $t1)
lw $s7, matrix3($t2)
printf($s7)
puts(space)
addi $t1, $t1, 1
j out_j
nop
out_jend:
puts(enter)
addi $t0, $t0, 1
j out_i
nop
out_iend:
return0
