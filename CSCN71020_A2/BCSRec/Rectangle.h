#pragma once
#pragma once

class Rectangle {
private:
    int length = 0;
    int width = 0;
    bool hasValue = false;

public:
    // Returns true if values are valid and set (1..99)
    bool SetDimensions(int length, int width);

    int GetLength() const;
    int GetWidth() const;
    bool HasValue() const;

    int Area() const;
    int Perimeter() const;
};