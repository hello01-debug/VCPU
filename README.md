# VCPU
A virtual CPU written in C++.

# OPCODES
1: load the next number in RAM into reg0  
2: load the next number in RAM into reg1  
3: Add reg0 and reg1; store result in reg0  
4: print reg0 into the console  

# NOTES
You currently have to manually input program into RAM. The above opcodes are the only ones implemented. Currently does not support binary.

# COMPILING
```g++ -std=c++11 memory.cpp CPU.cpp main.cpp -o VCPU```
