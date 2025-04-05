#include <iostream>
#include <string>
#include <cstdio>  // for printf

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Two-argument constructor
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // One-argument constructor for squares
    Rectangle(double side) {
        length = side;
        width = side;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle destructor is called!\n";
    }

    // Method to display the rectangle's data
    void display(const std::string& label) {
        printf("%-15.10s | %10.2f | %10.2f\n", label.c_str(), length, width);
    }
};

int main() {
    // Using different constructors
    Rectangle rect1;                      // Default
    Rectangle rect2(10.5, 4.2);           // Two-arg
    Rectangle rect3(7.0);                 // One-arg (square)

    // Displaying information
    std::string label1 = "Default";
    std::string label2 = "Two-Args";
    std::string label3 = "Square";

    printf("%-15s | %10s | %10s\n", "Label", "Length", "Width");
    printf("--------------------------------------------------\n");

    rect1.display(label1);
    rect2.display(label2);
    rect3.display(label3);

    return 0;
}
