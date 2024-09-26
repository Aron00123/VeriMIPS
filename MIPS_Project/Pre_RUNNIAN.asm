.data
leap_year_msg: .asciiz "1\n"       # 是闰年
not_leap_year_msg: .asciiz "0\n"   # 不是闰年

.text
main:
    # 读取输入的年份
    li $v0, 5
    syscall
    move $t0, $v0

    # 判断是否为闰年
    divu $t1, $t0, 4     # 将输入年份除以4
    mfhi $t2             # 取余数
    divu $t3, $t0, 100   # 将输入年份除以100
    mfhi $t4             # 取余数
    divu $t5, $t0, 400   # 将输入年份除以400
    mfhi $t6             # 取余数

    # 如果年份是400的倍数，则是闰年
    beqz $t6, leap_year

    # 如果年份是100的倍数但不是400的倍数，则不是闰年
    beqz $t4, not_leap_year

    # 如果年份是4的倍数，则是闰年
    beqz $t2, leap_year
    j not_leap_year

leap_year:
    # 输出是闰年
    li $v0, 4
    la $a0, leap_year_msg
    syscall
    j exit

not_leap_year:
    # 输出不是闰年
    li $v0, 4
    la $a0, not_leap_year_msg
    syscall

exit:
    # 退出程序
    li $v0, 10
    syscall
