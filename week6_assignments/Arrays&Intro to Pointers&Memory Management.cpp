#include <iostream>

int main() {
    int* numbers = new int[100]{};

    for (int index = 0; index < 100; index++) {
        numbers[index] = index + 1;
    }

    // Optionally print to verify
    for (int index = 0; index < 100; index++) {
        std::cout << numbers[index] << " ";
    }
    std::cout << std::endl;

    delete[] numbers;

    return 0;
};
