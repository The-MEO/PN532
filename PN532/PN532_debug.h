#ifndef __DEBUG_H__
#define __DEBUG_H__

//#define DEBUG

#include "Arduino.h"

#ifdef ARDUINO_SAMD_VARIANT_COMPLIANCE
    #define PN_SERIAL SerialUSB
#else
    #define PN_SERIAL Serial
#endif

#ifdef DEBUG
#define DMSG(args...)       PN_SERIAL.print(args)
#define DMSG_STR(str)       PN_SERIAL.println(str)
#define DMSG_HEX(num)       PN_SERIAL.print(' '); PN_SERIAL.print((num>>4)&0x0F, HEX); PN_SERIAL.print(num&0x0F, HEX)
#define DMSG_INT(num)       PN_SERIAL.print(' '); PN_SERIAL.print(num)
#else
#define DMSG(args...)
#define DMSG_STR(str)
#define DMSG_HEX(num)
#define DMSG_INT(num)
#endif

#endif
