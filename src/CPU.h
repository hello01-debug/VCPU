#pragma once

#include "memory.h"

class CPU
{
public:
    enum Registers
    {
        R0,
        R1,
        R2,
        R_COUNT
    };

    byte regs[R_COUNT];

    byte sp = 0x30;
private:

    bool m_Halt;

    memory *RAM;

    byte Fetch();

    void Decode(byte opcode);

    int jmpTimes;

public:
    CPU(memory *RAM);
    void Run();
    void Load0(byte value);
    void Load1(byte value);
    void Add();
    void Print();
    void Mul();
    void Int(byte interrupt);
    void Push(byte value);
    byte Pop();

    byte pc;
};