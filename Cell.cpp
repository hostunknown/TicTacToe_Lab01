#include "Cell.hpp"

Cell::Cell() : _state(CellState::Empty) {}

Cell::Cell(CellState state) : _state(state) {}

Cell::Cell(const Cell& other) : _state(other.GetState()) {}

CellState Cell::GetState() const {
    return _state;
}

void Cell::SetState(CellState state) {
    _state = state;
}

Cell Cell::operator=(const Cell& other) {
    _state = other.GetState();
    return *this;
}

bool Cell::operator==(const Cell& other) const {
    return _state == other.GetState();
}

std::istream& operator>>(std::istream& in, Cell& cell) {
    int stateVal;
    in >> stateVal;
    cell.SetState(static_cast<CellState>(stateVal));
    return in;
}

std::ostream& operator<<(std::ostream& out, const Cell& cell) {
    out << static_cast<int>(cell.GetState());
    return out;
}