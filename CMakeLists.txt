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

set(CPACK_PACKAGE_NAME "Bridge")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_DESCRIPTION "Bridge communication library")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "ka1te6 a.andrey2006@yandex.ru")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.14)")
include(CPack)

add_executable(BridgeApp main.cpp)
target_link_libraries(BridgeApp BridgeLib)
enable_testing()
add_subdirectory(tests)
