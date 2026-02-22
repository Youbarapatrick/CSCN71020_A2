#include "Rectangle.h"

bool Rectangle::SetDimensions(int len, int wid)
{
    if (len < 1 || wid < 1)
        return false;

    if (len > 99 || wid > 99)
        return false;

    length = len;
    width = wid;
    hasValue = true;
    return true;
}

int Rectangle::GetLength() const
{
    return length;
}

int Rectangle::GetWidth() const
{
    return width;
}

bool Rectangle::HasValue() const
{
    return hasValue;
}

int Rectangle::Area() const
{
    if (!hasValue)
        return 0;
    return length * width;
}

int Rectangle::Perimeter() const
{
    if (!hasValue)
        return 0;
    return 2 * (length + width);
}