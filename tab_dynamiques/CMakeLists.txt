cmake_minimum_required(VERSION 3.16)

project(tab_dynamiques LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tab_dynamiques main.cpp)

include(GNUInstallDirs)
install(TARGETS tab_dynamiques
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
