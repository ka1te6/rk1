#ifndef CommunicationDevice_h
#define CommunicationDevice_h
#include "Protocol.h"

class CommunicationDevice {
    Protocol* _protocol;
public:
    CommunicationDevice();
    CommunicationDevice(Protocol* protocol); 
    virtual void turnOnEngine(); 
};

#endif
