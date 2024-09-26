.data
string: .space 80

.macro return0
li, $v0, 10
syscall
.end_macro

.macro scanf(%p) # scan char
li, $v0, 12
syscall
move %p, $v0
.end_macro

.text
# input
li, $v0, 5
syscall
move $s0, $v0 # scan n to $s0
li $t0, 0
in_i:
beq $t0, $s0, in_iend
scanf($s1)
sb $s1, string($t0)
addi $t0, $t0, 1
j in_i
nop
in_iend: # already stored

# check
li $t1, 0
check_begin:
sub $t2, $s0, $t1
addi $t2, $t2, -1
bge $t1, $t2, check_end
lb $t3, string($t1)
lb $t4, string($t2)
bne $t3, $t4, fail
addi $t1, $t1, 1
j check_begin
nop
check_end:
li $a0, 1
li $v0, 1
syscall
return0

fail:
li $a0, 0
li $v0, 1
syscall
return0
