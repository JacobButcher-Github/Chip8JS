// chip.h
#ifndef CHIP8_H
#define CHIP8_H
#include <cstdint>

class Chip8 {
public:
  Chip8();
  void initialize();
  void loadRom(const char *fileName);
  void cycle();

private:
  uint8_t memory[4096];
  uint8_t registers[16];
  uint16_t programCounter;
  uint16_t indexRegister;
  uint16_t stack[32];
  uint8_t delayTimer;
  uint8_t soundTimer;
};

#endif
