#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> bookTitles;
    bookTitles.push_back("1984");
    bookTitles.push_back("The Hobbit");
    bookTitles.push_back("Dune");

    for (const auto& title : bookTitles) {
        std::cout << title << std::endl;
    }

    return 0;
}
