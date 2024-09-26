.data
result: .space 4050

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

.macro getindex(%ans, %p)
sll %ans, %p, 2
.end_macro

.text
scanf($s0) # n
beq $s0, $0, jump_end
addi $s1, $s0, 1 # n + 1
li $t8, 1
sw $t8, result($0)
li $s2, 0 # size = 0
li $t0, 2 # i
fac_1begin:
beq $t0, $s1, fac_1end
li $t1, 0 # in
li $t2, 0 # j
fac_2begin:
addi $s3, $s2, 1 # size + 1
beq $t2, $s3, fac_2end
getindex($t9, $t2)
lw $t3, result($t9)
mult $t3, $t0
mflo $t4
add $t4, $t4, $t1 # tmp_result
li $t5, 10
div $t4, $t5
mfhi $t6
getindex($t9, $t2)
sw $t6, result($t9) # result[j] = tmp_result % 10
mflo $t1
bne $t2, $s2, skip
blez $t1, skip
addi $s2, $s2, 1
skip:
addi $t2, $t2, 1
j fac_2begin
fac_2end:
addi $t0, $t0, 1
j fac_1begin
fac_1end:

# output
li $t0, 0 # top_number = 0
li $t1, 999 # i
li $t2, -1 # end
out_i:
beq $t1, $t2, out_iend
getindex($t9, $t1)
lw $t3, result($t9)
beq $t3, $0, skip2
move $t0, $t1
j out_iend
skip2:
addi $t1, $t1, -1
j out_i
out_iend:

move $t4, $t0 # i(new) = top_number
output_begin:
beq $t4, $t2, output_end
getindex($t9, $t4)
lw $t5, result($t9)
printf($t5)
addi $t4, $t4, -1
j output_begin
output_end:
return0

jump_end:
li $s7, 1
printf($s7)
return0



