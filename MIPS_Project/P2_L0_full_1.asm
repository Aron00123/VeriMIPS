.data
symbol: .space 32
array: .space 32
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

.macro push(%src)
    sw      %src, 0($sp)
    subi    $sp, $sp, 4
.end_macro

.macro pop(%des)
    addi    $sp, $sp, 4
    lw      %des, 0($sp) 
.end_macro

.text
scanf($s0) # scanf n to $s0

move $a0, $0
jal FullArray
return0

FullArray:
push($ra)
push($t0)
push($t3)
move $t0, $a0
li $t1, 0
bge $t0, $s0, resultprint
li $t3, 0
for_begin:
beq $t3, $s0, for_end
sll $t8, $t3, 2
lw $t4, symbol($t8)
beq $t4, $0, yes
yes_return:
addi $t3, $t3, 1
j for_begin

for_end:
pop($t3)
pop($t0)
pop($ra)
jr $ra

yes:
addi $t5, $t3, 1
sll $t8, $t0, 2
sw $t5, array($t8)
li $t5, 1
sll $t8,$t3,2
sw $t5, symbol($t8)
addi $t6, $t0, 1
move $a0, $t6
jal FullArray
li $t5,0
sll $t8, $t3, 2
sw $t5, symbol($t8)
j yes_return

resultprint:
beq $t1, $s0, resultprintend
sll $t8, $t1, 2
lw $t2, array($t8)
printf($t2)
puts(space)
addi $t1, $t1, 1
j resultprint
resultprintend:
puts(enter)
j for_end

