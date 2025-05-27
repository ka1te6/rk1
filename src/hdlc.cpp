#include "hdlc.h"
#include <iostream>

void HDLC::sendData(std::string data) {
    std::cout << "hdlc header " << data << " hdlc tailer" << std::endl;
}
