#include "config.h"
bool sendByteMSBfirst(unsigned char n, unsigned char byte)
{
    bool bit;
    bit = (byte & 1<<n)>>n;
    return bit;
}
