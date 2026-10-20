#pragma once
#include <iostream>
#include "CellState.hpp"

class Cell {
    CellState _state;
public:
    Cell();
    Cell(CellState state);
    Cell(const Cell& other);

    CellState GetState() const;
    void SetState(CellState state);

    Cell operator=(const Cell& other);
    bool operator==(const Cell& other) const;
};

std::istream& operator>>(std::istream& in, Cell& cell);
std::ostream& operator<<(std::ostream& out, const Cell& cell);