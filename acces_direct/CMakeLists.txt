cmake_minimum_required(VERSION 3.16)

project(acces_direct LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(acces_direct main.cpp)

include(GNUInstallDirs)
install(TARGETS acces_direct
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
