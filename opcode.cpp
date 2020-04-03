/*
Names: Marina Pestriacheva, Ben Forsberg, Dante Colombo-Sadeghi
Account usernames: Marina - cssc1907, Ben - cssc1930, Dante - cssc1911
Class information: CS 530, Spring 2020
Assignment #2, DXE Disassembler for XE computer
Filename of this file: README
*/

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <stdlib.h>

/*structure*/
struct opcode {
    std::string hex;
    std::string name;
    std::string formats;
};

const struct opcode opcode_table [] = {
  {"18", "ADD", "3/4" },
  {"58", "ADDF", "3/4"},
  {"90", "ADDR", "2"},
  {"40", "AND", "3/4"},
  {"B4", "CLEAR", "2"},
  {"28", "COMP", "3/4"},
  {"88", "COMPF", "3/4"},
  {"A0", "COMPR", "2"},
  {"24", "DIV", "3/4"},
  {"64", "DIVF", "3/4"},
  {"9C", "DIVR", "2"},
  {"C4", "FIX", "1"},
  {"C0", "FLOAT", "1"},
  {"F4", "HIO", "1"},
  {"3C", "J", "3/4"},
  {"30", "JEQ", "3/4"},
  {"34", "JGT", "3/4"},
  {"38", "JLT", "3/4"},
  {"48", "JSUB", "3/4"},
  {"00", "LDA", "3/4"},
  {"68", "LDB", "3/4"},
  {"50", "LDCH", "3/4"},
  {"70", "LDF", "3/4"},
  {"08", "LDL", "3/4"},
  {"6C", "LDS", "3/4"},
  {"74", "LDT", "3/4"},
  {"04", "LDX", "3/4"},
  {"D0", "LPS", "3/4"},
  { "20", "MUL", "3/4" }, 
  {"60", "MULF", "3/4"},
  {"98", "MULR", "2"},
  {"C8", "NORM", "1"},
  {"44", "OR", "3/4"},
  {"D8", "RD", "3/4"},
  {"AC", "RMO", "2"},
  {"4C", "RSUB", "3/4"},
  {"A4", "SHIFTL", "2"},
  {"A8", "SHIFTR", "2"},
  {"F0", "SIO", "1"},
  {"EC", "SSK", "3/4"},
  {"0C", "STA", "3/4"},
  {"78", "STB", "3/4"},
  {"54", "STCH", "3/4"},
  {"80", "STF", "3/4"},
  {"D4", "STI", "3/4"},
  {"14", "STL", "3/4"},
  {"7C", "STS", "3/4"},
  {"E8", "STSW", "3/4"},
  {"84", "STT", "3/4"},
  {"10", "STX", "3/4"},
  {"1C", "SUB", "3/4"},
  {"5C", "SUBF", "3/4"},
  {"94", "SUBR", "2"},
  {"B0", "SVC", "2"},
  {"E0", "TD", "3/4"},
  {"F8", "TIO", "1"},
  {"2C", "TIX", "3/4"},
  {"B8", "TIXR", "2"},
  {"DC", "WD", "3/4"}
};