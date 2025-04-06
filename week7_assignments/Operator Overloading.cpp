#include <iostream>
#include <string>

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() : length(0.0), width(0.0) {}

    // Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overload the == operator
    bool operator==(const Rectangle& other) const {
        return (length == other.length) && (width == other.width);
    }

    // Friend function to overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
};

// Overload << operator (outside the class)
std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "Rectangle [Length: " << rect.length << ", Width: " << rect.width << "]";
    return os;
}

// Example usage
int main() {
    Rectangle r1(10.5, 5.2);
    Rectangle r2(10.5, 5.2);
    Rectangle r3(7.0, 4.0);

    std::cout << r1 << std::endl;

    if (r1 == r2)
        std::cout << "r1 and r2 are equal." << std::endl;
    else
        std::cout << "r1 and r2 are NOT equal." << std::endl;

    if (r1 == r3)
        std::cout << "r1 and r3 are equal." << std::endl;
    else
        std::cout << "r1 and r3 are NOT equal." << std::endl;

    return 0;
}
