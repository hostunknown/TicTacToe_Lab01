#pragma once
#include "Point.hpp"

struct AbstractPainter {
    virtual void DrawBoard() = 0;
    virtual void DisplayMessage(const char* message) = 0;
    virtual void ClearScreen() = 0;
    virtual ~AbstractPainter() = default;
};