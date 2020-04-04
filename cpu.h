#include <iostream>

const int MEM_SIZE = 4096;
const int REGISTER_SIZE = 16;
const int SCREEN_HEIGHT = 32; // 64x32 pixels.
const int SCREEN_WIDTH = 64; // 64x32 pixels.

class Cpu {
  public:
    Cpu();
    void ProcessCycle();

  private:
    int programCounter;
    short memory[MEM_SIZE];
    short registers[REGISTER_SIZE];
};