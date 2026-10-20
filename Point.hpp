#pragma once
#include <iostream>

struct Point {
    int row;
    int col;

    Point(int r = 0, int c = 0);
    Point(const Point& other);

    Point operator=(const Point& other);
    bool operator==(const Point& other) const;
};

std::istream& operator>>(std::istream& in, Point& point);
std::ostream& operator<<(std::ostream& out, const Point& point);