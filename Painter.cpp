#include "Painter.hpp"
#include <iostream>
#include <cstdlib>

void Painter::DrawBoard() {
    std::cout << "\n     |     |     \n";
    std::cout << "  -  |  -  |  -  \n";
    std::cout << "     |     |     \n";
    std::cout << "-----------------\n";
    std::cout << "     |     |     \n";
    std::cout << "  -  |  -  |  -  \n";
    std::cout << "     |     |     \n";
    std::cout << "-----------------\n";
    std::cout << "     |     |     \n";
    std::cout << "  -  |  -  |  -  \n";
    std::cout << "     |     |     \n\n";
}

void Painter::DisplayMessage(const char* message) {
    if (message != nullptr) {
        std::cout << message << std::endl;
    }
}

void Painter::ClearScreen() {
    system("cls");
}