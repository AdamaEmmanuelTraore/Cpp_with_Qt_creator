cmake_minimum_required(VERSION 3.16)

project(outputIterator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(outputIterator main.cpp)

include(GNUInstallDirs)
install(TARGETS outputIterator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
