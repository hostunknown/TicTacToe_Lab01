#pragma once
#include "AbstractPainter.hpp"

class Painter : public AbstractPainter {
public:
    virtual void DrawBoard() override;
    virtual void DisplayMessage(const char* message) override;
    virtual void ClearScreen() override;
};