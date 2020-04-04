#include <iostream>
#include "cpu.cpp"


int main() {
  Cpu chip8;

  while(true) {
    chip8.ProcessCycle();
  }
}
