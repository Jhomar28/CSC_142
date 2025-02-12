#include <iostream>





class Car{
            private:
                    std::string owner = "John Doe";
            public:
                    int year;
                    std::string make;
                    std::string model;

                    void setOwner(std::string name){
                            owner = name;
                    }
                    std::string getOwner(){
                            return owner;
                    }
    };

int main(){
        Car myFirstCar;
        myFirstCar.year = 2015;
        myFirstCar.make = "BMW";
        myFirstCar.model ="X1";

        // Car myFirstCar;
        std::cout<<myFirstCar.getOwner()<<"\n";
        myFirstCar.setOwner("Jane Doe");
        std::cout<<myFirstCar.getOwner()<<"\n";

        
        // The line below will cause an error as the
        // protection level of the owner variable
        // is private and is not directly accessible
        // outside of the class definition 
        // myFirstCar.owner = "Jane Doe";

};

    
           

      

