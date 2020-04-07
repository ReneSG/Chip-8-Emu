#include <iostream>
#include <fstream>
#include <iomanip>
#include "cpu.h"

using namespace std;

Cpu::Cpu() {}

void Cpu::ProcessCycle() {
  // Read OpCode.
  // Process OpCode.
  // Increase Process Counter.
}

void Cpu::ReadROM(string filePath) {

  ifstream inFile(filePath.c_str(), ios::binary);

  int it = 0;
  unsigned char op;
  inFile >> std::noskipws;
  while(inFile >> hex >> op) {
    memory[MEMORY_START_ADDRESS + it] = (int) op;
  }
}
