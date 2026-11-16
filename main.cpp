#include <iostream>
#include <memory>
#include "Painter.hpp"
#include "Listener.hpp"
#include "GameEngine.hpp"

int main() {
    std::cout << "TIC / TAC / TOE\n";

    std::unique_ptr<AbstractPainter> painter = std::make_unique<Painter>();
    Listener listener;

    painter->DrawBoard();

    if (listener.AskPlayAgain()) {
        std::cout << "Reseting the game\n";
    }

    return 0;
}