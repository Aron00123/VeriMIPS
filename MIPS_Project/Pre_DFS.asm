.data
G: .space 256
book: .space 32
space: .asciiz " "
enter: .asciiz "\n"

.macro getpos(%ans,%i,%j)
  sll %ans,%i,3
  add %ans,%ans,%j
  sll %ans,%ans,2
.end_macro

.macro end
  li $v0,10
  syscall
.end_macro

.macro getint(%des)
  li $v0,5
  syscall
  move %des,$v0
.end_macro

.macro printint(%src)
  move $a0,%src
  li $v0,1
  syscall
.end_macro

.macro push(%src)
  sw %src,0($sp)
  addi $sp,$sp,-4
.end_macro

.macro pop(%des)
  addi $sp,$sp,4
  lw %des,0($sp)
.end_macro

.text
getint($s0) #n
getint($s1) #m
li $t1, 0 #i
li $s2, 0 #ans

loop1:
beq $t1, $s1, loop1_end
nop
getint($t4)
getint($t5)
addi $t4, $t4, -1
addi $t5, $t5, -1
getpos($t6, $t4, $t5)
li $t3, 1
sw $t3, G($t6) #let G[x-1][y-1] = 1
getpos($t6, $t5, $t4)
li $t3, 1
sw $t3, G($t6) #let G[y-1][x-1] = 1
addi $t1, $t1, 1
j loop1
nop
loop1_end:
li $a0, 0
li $a1, 0
li $t0, 0
jal dfs #use dfs
move $s2, $v0
printint($s2) #print answer
end


dfs:
  push($ra)
  push($a1)
  push($t0)#getin
  move $t0,$a0#x
  
  li $t3,1#flag=1
  sll $t4,$t0,2
  sw $t3,book($t4)#book[x]=1
  li $t1,0#i=0
  
  for_begin2:
    slt $t2,$t1,$s0
    beq $t2,$0,for_end2
      nop
      sll $t4,$t1,2
      lw $t3,book($t4)#flag&=book[i]
      beq $t3,$0,for_end2
       addi $t1,$t1,1
       j for_begin2
      nop
  for_end2:
    li $t1,0#i=0
    li $t2,1
    beq $t3,$t1,for_begin3
       nop
       getpos($t4,$t0,$0)
       lw $t5,G($t4)
       beq $t5,$0,for_begin3
          nop
          li $v0,1#ans=1
          pop($t0)
          pop($a1)
          pop($ra)
          printint($v0)
          #li $t0,0
          #li $t1,4
    end
          nop
       nop
       
  for_begin3:
     slt $t2,$t1,$s0
     beq $t2,$0,for_end3
        nop
        sll $t4,$t1,2
        lw $t5,book($t4)#book[i]
        li $t3,1#changliang 1
        beq $t5,$t3,continue
          nop
          getpos($t7,$t0,$t1)
          lw $t6,G($t7)#G[x][i]
          beq $t6,$0,continue
             nop
             move $a0,$t1
             move $a1,$t1
             jal dfs
             move $t1,$a1
             addi $t1,$t1,1
             j for_begin3
             nop
          nop
        nop
        
    continue:
     addi $t1,$t1,1
     j for_begin3
     
   for_end3:
     sll $t4,$t0,2 
     sw $0,book($t4)#book[x]=0
     li $v0,0#ans=0
      pop($t0)
      pop($a1)
      pop($ra)
      
      jr $ra#return
       