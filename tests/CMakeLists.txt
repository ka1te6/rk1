cmake_policy(SET CMP0079 NEW)
find_package(GTest REQUIRED)

add_executable(BridgeTests
    test_hdlc.cpp
    test_modbus.cpp
)

target_link_libraries(BridgeTests
    PRIVATE
        BridgeLib
        GTest::GTest
        GTest::Main
)

add_test(NAME BridgeTests COMMAND BridgeTests) 
