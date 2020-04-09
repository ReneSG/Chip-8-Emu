#include <iostream>
#include <fstream>
#include <iomanip>
#include "cpu.h"

using namespace std;

Cpu::Cpu() {
  this->programCounter = MEMORY_START_ADDRESS;
}

bool Cpu::ProcessCycle() {
  // Fetch OpCode.
  int frontOp = this->memory[this->programCounter];
  int backOp = this->memory[this->programCounter + 1];

  frontOp = frontOp << 8;

  int operationCode = frontOp | backOp;

  // Process OpCode.
  // Increase Process Counter.
  this->IncreaseProgramCounter();
  if(this->programCounter >= MEM_SIZE) {
    return false;
  }
  return true;
}

void Cpu::ReadROM(string filePath) {

  ifstream inFile(filePath.c_str(), ios::binary);

  int it = 0;
  unsigned char op;
  inFile >> std::noskipws;
  while(inFile >> hex >> op) {
    this->memory[MEMORY_START_ADDRESS + it] = (int) op;
    it++;
  }
}

void Cpu::IncreaseProgramCounter() {
  this->programCounter += 2;
}

// DEBUG FUNCTIONS
void Cpu::PrintMemory() {
  for(int i = MEMORY_START_ADDRESS; i < MEM_SIZE; i++) {
    cout << "Memory[i] = " << hex << this->memory[i] << endl;
  }
}
