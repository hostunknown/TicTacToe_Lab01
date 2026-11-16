#include "Listener.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

void Listener::GetPlayerMove() {}

bool Listener::AskPlayAgain() {
    std::string response;
    std::cout << "Doresti sa joci din nou? (da/nu): ";
    std::cin >> response;

    std::vector<std::string> validAnswers = { "da", "nu", "yes", "no" };

    auto it = std::find(validAnswers.begin(), validAnswers.end(), response);

    if (it != validAnswers.end() && (*it == "da" || *it == "yes")) {
        return true;
    }
    return false;
}

bool Listener::ValidateCommand(const std::string& cmd) {
    std::vector<std::string> commands = { "exit", "restart", "move" };

    return std::any_of(commands.begin(), commands.end(), [&cmd](const std::string& c) {
        return c == cmd;
        });
}