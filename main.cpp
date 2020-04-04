#include <iostream>
#include "cpu.cpp"

using namespace std;

int main(int argc, char* argv[]) {
  Cpu chip8;

  string filePath = argv[1];

  while(true) {
    chip8.ReadROM(filePath);
    chip8.ProcessCycle();
  }
}
