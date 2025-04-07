#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string data = "1984,Orwell,12.99";
    std::stringstream ss(data);
    std::string token;

    while (getline(ss, token, ',')) {
        std::cout << token << std::endl;
    }

    return 0;
}
