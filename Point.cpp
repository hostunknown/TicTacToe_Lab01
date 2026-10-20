#include "Point.hpp"

Point::Point(int r, int c) : row(r), col(c) {}

Point::Point(const Point& other) : row(other.row), col(other.col) {}

Point Point::operator=(const Point& other) {
    row = other.row;
    col = other.col;
    return *this;
}

bool Point::operator==(const Point& other) const {
    return row == other.row && col == other.col;
}

std::istream& operator>>(std::istream& in, Point& point) {
    int r, c;
    in >> r >> c;
    point = Point(r, c);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << point.row << " " << point.col;
    return out;
}