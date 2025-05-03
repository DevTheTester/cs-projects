Address     Contents

00          1F13 //Load RF with 13hex
01          0400 //Load R4 with 0
//if (RF is a positive number) then load A into R4 (register 4)
//Load 1 into sign bit in any register
02          20EF //Load E with F (Make a copy of F to negate for value check)
03          70E0 //Negate E
04          1D80 //Load RD with 80
05          9D08 //Shift RD left 8 bits (Turn it into a negative sign)
06          A5DE //Load R5 = RD And RE 
//if RF was negative then RE negated will be positive and R5 will this will be 0 
//So if RF=negative R5=0
07          D532 //Jump to instruction XY if value was positive 
09          D011 //Else skip 10 instruction and go to 11
XY          140A //Load A into R4
YZ          DF69 //If RF is 0 jump to 69
68          D870 //Else go to 70
69          140B //Load B into R4
70          DF69 //Else do nothing 
71          E000 // End