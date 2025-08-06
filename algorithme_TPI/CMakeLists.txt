cmake_minimum_required(VERSION 3.16)

project(algorithme_TPI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(algorithme_TPI main.cpp)

include(GNUInstallDirs)
install(TARGETS algorithme_TPI
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
