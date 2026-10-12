#include <iostream>
#include "Painter.hpp"
#include "Listener.hpp"
#include "GameEngine.hpp"

int main() {
    std::cout << "TIC / TAC / TOE\n";

    Painter painter;
    Listener listener;

    painter.DrawBoard();

    return 0;
}