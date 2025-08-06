cmake_minimum_required(VERSION 3.16)

project(Exercice10 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercice10 main.cpp)

include(GNUInstallDirs)
install(TARGETS Exercice10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
