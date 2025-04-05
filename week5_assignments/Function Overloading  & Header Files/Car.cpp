#include <iostream>
// #include "Car.h"
#include "Car.h"

int main(){
    Car myCar;

    std::cout<<"Name: "<<myCar.getOwner()<<"\n";
    myCar.setOwner("Mary Jane");
    std::cout<<"Name: "<<myCar.getOwner()<<"\n";

};