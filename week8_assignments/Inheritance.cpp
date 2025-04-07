#include <iostream>
#include <string>

class Publication {
protected:
    std::string title;
public:
    Publication(std::string t) : title(t) {}
    virtual void print() {
        std::cout << "Title: " << title << std::endl;
    }
};

class Book : public Publication {
private:
    std::string author;
public:
    Book(std::string t, std::string a) : Publication(t), author(a) {}
    void print() override {
        Publication::print();
        std::cout << "Author: " << author << std::endl;
    }
};

int main() {
    Book b("1984", "George Orwell");
    b.print();

    return 0;
}
