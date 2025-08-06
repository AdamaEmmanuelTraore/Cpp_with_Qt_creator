cmake_minimum_required(VERSION 3.16)

project(entier_inclus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(entier_inclus main.cpp)

include(GNUInstallDirs)
install(TARGETS entier_inclus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
