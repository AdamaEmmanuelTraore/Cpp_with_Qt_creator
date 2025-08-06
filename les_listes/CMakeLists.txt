cmake_minimum_required(VERSION 3.16)

project(les_listes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(les_listes main.cpp)

include(GNUInstallDirs)
install(TARGETS les_listes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
