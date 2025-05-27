#include <gtest/gtest.h>
#include "hdlc.h"

TEST(HDLCTest, SendData) {
    HDLC hdlc;
    testing::internal::CaptureStdout();
    hdlc.sendData("test");
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "hdlc header test hdlc tailer\n");
}
