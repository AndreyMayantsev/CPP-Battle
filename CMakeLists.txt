cmake_minimum_required(VERSION 3.16)

project(demoprg LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(demoprg main.cpp


    isarmor.h isarmor.cpp
    hero.h hero.cpp
    duel_arena.h duel_arena.cpp
)

include(GNUInstallDirs)
install(TARGETS demoprg
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
