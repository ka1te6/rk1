#include "CommunicationDevice.h"

CommunicationDevice::CommunicationDevice() 
    : _protocol(nullptr) {}

CommunicationDevice::CommunicationDevice(Protocol* protocol) 
    : _protocol(protocol) {}

void CommunicationDevice::turnOnEngine() {}
