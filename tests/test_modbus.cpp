#include <gtest/gtest.h>
#include "modbus.h"

TEST(ModbusTest, SendData) {
    Modbus modbus;
    testing::internal::CaptureStdout();
    modbus.sendData("test");
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "modbus header test modbus tailer\n");
}
