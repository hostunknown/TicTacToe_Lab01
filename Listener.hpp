#pragma once
#include <vector>
#include <string>

class Listener {
public:
    void GetPlayerMove();
    bool AskPlayAgain();

    bool ValidateCommand(const std::string& cmd);
};