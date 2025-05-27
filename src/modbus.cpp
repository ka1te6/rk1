#include "modbus.h"
#include <iostream>

void Modbus::sendData(std::string data) {
    std::cout << "modbus header " << data << " modbus tailer" << std::endl;
}
