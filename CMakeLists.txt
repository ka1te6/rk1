cmake_minimum_required(VERSION 3.10)
project(Bridge)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(BridgeLib STATIC
    src/CommunicationDevice.cpp
    src/SerialDevice.cpp
    src/hdlc.cpp
    src/modbus.cpp
)

add_executable(BridgeApp main.cpp)
target_link_libraries(BridgeApp BridgeLib)
enable_testing()
add_subdirectory(tests)
