#ifndef SerialDevice_H
#define SerialDevice_H
#include "CommunicationDevice.h"

class SerialDevice : public CommunicationDevice {
    Protocol* _protocol;
public:
    virtual ~SerialDevice(){}
    SerialDevice(Protocol* protocol);
    void turnOnEngine();
};

#endif
