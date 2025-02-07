#include <iostream>
#include <string>

int main(){
    int a = 5, b = 3;
    double c = static_cast<double>(a) / static_cast<double>(b);
    std::cout<<"c ="<<c<<std::endl;

}