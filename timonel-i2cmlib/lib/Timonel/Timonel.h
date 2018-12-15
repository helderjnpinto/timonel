/*
  Timonel.h
  =========
  Library for uploading firmware to an Atmel ATTiny85
  microcontroller that runs the Timonel I2C bootloader.
  2018-12-13 Gustavo Casanova.
*/
#ifndef Timonel_h
#define Timonel_h

#define USE_SERIAL Serial

#include "Arduino.h"

class Timonel {
  public:
    Timonel(byte address);
    //void dot();
    //void dash();
    byte getVersionMaj();
    byte getVersionMin();
    byte getFeatures();
  private:
    byte _addr;
    word _timonelStart = 0xFFFF;
    byte _blockRXSize = 0;
};

#endif
