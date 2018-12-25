#include "pxt.h"

namespace robobloq {



    //% help=robobloq/read-until
    //% blockId=robobloq_read_until block="robobloq|read until %delimiter=serial_delimiter_conv"
    //% weight=19
    String readUntil(String delimiter) {
      return PSTR(uBit.serial.readUntil(MSTR(delimiter)));
    }

    //% help=robobloq/robobloq_readBufferSize
    //% blockId=robobloq_readBufferSize block="robobloq|read readBufferSize"
    int readBufferSize(){
      int Siz = uBit.serial.getRxBufferSize();
      return Siz;
    }
}