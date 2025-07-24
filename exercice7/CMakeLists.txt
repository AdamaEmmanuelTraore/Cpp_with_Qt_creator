cmake_minimum_required(VERSION 3.16)

project(exercice7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercice7 main.cpp)

include(GNUInstallDirs)
install(TARGETS exercice7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
