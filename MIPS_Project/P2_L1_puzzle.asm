.data
map: .space 1024
isvisited: .space 1024
space: .asciiz " "
enter: .asciiz "\n"

.macro puts(%p) # put string
la $a0, %p
li $v0, 4
syscall
.end_macro

.macro return0
li $v0, 10
syscall
.end_macro

.macro scanf(%p)
li $v0, 5
syscall
move %p, $v0
.end_macro

.macro printf(%p)
move $a0, %p
li $v0, 1
syscall
.end_macro

.macro push(%src)
sw      %src, 0($sp)
subi    $sp, $sp, 4
.end_macro

.macro pop(%des)
addi    $sp, $sp, 4
lw      %des, 0($sp) 
.end_macro

.macro getindex(%ans, %i, %j)
sll %ans, %i, 3
add %ans, %ans, %j
sll %ans, %ans, 2
.end_macro

.text
li $s4, 0
# input
scanf($s0) # n
scanf($s1) # m
li $t0, 0 # i
in_i:
beq $t0, $s0, in_iend
li $t1, 0 # j
in_j:
beq $t1, $s1, in_jend
scanf($t3)
getindex($t4, $t0, $t1)
sw $t3, map($t4)
sw $0, isvisited($t4)
addi $t1, $t1, 1
j in_j
in_jend:
addi $t0, $t0, 1
j in_i
in_iend:
scanf($t0) # startx + 1
scanf($t1) # starty + 1
scanf($s2) # endx + 1
scanf($s3) # endy + 1

# find
addi $t0, $t0, -1
addi $t1, $t1, -1
addi $s2, $s2, -1
addi $s3, $s3, -1
move $a0, $t0
move $a1, $t1
jal FindRoad

#output
printf($s4)
return0


FindRoad:
push($ra)
push($t0)
push($t1)
move $t0, $a0
move $t1, $a1
bne $t0, $s2, find
bne $t1, $s3, find
addi $s4, $s4, 1
j return
find:
getindex($t2, $t0, $t1)
lw $t3, map($t2)
lw $t4, isvisited($t2)
bne $t3, $0, return
bne $t4, $0, return
li $t5, 1
sw $t5, isvisited($t2)
if_1:
blez $t1, if_2 # if starty <= 0, jump
addi $t8, $t1, -1
move $a0, $t0
move $a1, $t8
jal FindRoad
if_2:
addi $t7, $s1, -1 # $t7 = m - 1
sub $t6, $t1, $t7 # $t6 = starty - (m - 1)
bgez $t6, if_3 # if starty >= m - 1, jump
addi $t8, $t1, 1
move $a0, $t0
move $a1, $t8
jal FindRoad
if_3:
blez $t0, if_4 # if startx <= 0, jump
addi $t8, $t0, -1
move $a0, $t8
move $a1, $t1
jal FindRoad
if_4:
addi $t7, $s0, -1 # $t7 = n - 1
sub $t6, $t0, $t7 # $t6 = startx - (n - 1)
bgez $t6, if_end # if startx >= n - 1, jump
addi $t8, $t0, 1
move $a0, $t8
move $a1, $t1
jal FindRoad
if_end:
getindex($t2, $t0, $t1)
li $t5, 0
sw $t5, isvisited($t2)
j return

return:
pop($t1)
pop($t0)
pop($ra)
jr $ra



