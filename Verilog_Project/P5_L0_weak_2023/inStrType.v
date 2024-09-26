`define nop 10'h0    // P5 
// ------------------ Load ------------------------
`define lb 10'h1
`define lh 10'h2
`define lw 10'h3    // P5 

// ------------------ Store ------------------------
`define sb 10'h4
`define sh 10'h5
`define sw 10'h6    // P5 

// ------------------ cal_r ------------------------
`define add 10'h7    // P5 
`define sub 10'h8    // P5 
`define And 10'h9 // and is a keyword in verilog, so the 'a' should be big write
// `define Or 10'ha
// `define slt 10'hb
// `define sltu 10'hc
// `define mult 10'hd
// `define multu 10'he
// `define div 10'hf
// `define divu 10'h10
// `define mfhi 10'h11
// `define mflo 10'h12
// `define mthi 10'h13
// `define mtlo 10'h14


// ------------------ cal_i ------------------------

`define addi 10'h15
`define andi 10'h16
`define ori 10'h17    // P5 
`define lui 10'h18    // P5 


// ------------------ selection branch ------------------------
`define beq 10'h19    // P5 
`define bne 10'h1a


// ------------------ j-skip ------------------------

`define jal 10'h1b    // P5 
`define jr 10'h1c    // P5 

