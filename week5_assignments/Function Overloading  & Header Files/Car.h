#pragma once
#include <iostream>
using namespace std;

class Car {
   
    private:
        std::string owner = "John Doe";
    public:
        int year;
        std::string make;
        std::string model;

        // marked as inline
        inline std::string getOwner(){
        return owner;
        }

        // marked as inline
        inline void setOwner(std::string name){
        owner = name;
        }

};    
