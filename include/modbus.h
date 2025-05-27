#ifndef MODBUS_H
#define MODBUS_H
#include "Protocol.h"

class Modbus : public Protocol {
public:
    void sendData(std::string data) override;
};

#endif
