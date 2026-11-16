cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CellLib STATIC Cell.cpp Cell.hpp CellState.hpp)
add_library(PointLib STATIC Point.cpp Point.hpp)

add_executable(TicTacToe 
    main.cpp
    GameEngine.cpp
    Listener.cpp
    Painter.cpp
    AbstractPainter.hpp
)

target_link_libraries(TicTacToe PRIVATE CellLib PointLib)