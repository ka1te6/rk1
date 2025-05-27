#include "SerialDevice.h"
#include <iostream>

SerialDevice::SerialDevice(Protocol* protocol) 
    : _protocol(protocol) {}

void SerialDevice::turnOnEngine() {
    std::cout << "delay 2 sec ..." << std::endl;
    _protocol->sendData("0x00 0x01 0xff");
    std::cout << "wait 2 sec for engine startup..." << std::endl;
}
