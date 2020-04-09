#include <iostream>

const int MEM_SIZE = 4096;
const int REGISTER_SIZE = 16;
const int SCREEN_HEIGHT = 32; // 64x32 pixels.
const int SCREEN_WIDTH = 64; // 64x32 pixels.
const int MEMORY_START_ADDRESS = 512;

using namespace std;

class Cpu {
  public:
    Cpu();
    bool ProcessCycle();
    void ReadROM(string filePath);

  private:
    int programCounter;
    int indexRegister;
    int delayTimer;
    int soundTimer;

    int memory[MEM_SIZE]; // Each memory slot is 8 bits / a byte long.
    int registers[REGISTER_SIZE];
    int graphics[SCREEN_WIDTH][SCREEN_HEIGHT];
};
