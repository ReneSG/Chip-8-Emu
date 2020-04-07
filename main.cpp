#include <iostream>
#include "cpu.cpp"

using namespace std;

int main(int argc, char* argv[]) {
  Cpu chip8;

  string filePath = argv[1];

  chip8.ReadROM(filePath);

  while(true) {
    chip8.ProcessCycle();
  }
}
