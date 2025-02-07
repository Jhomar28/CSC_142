#include <fstream>
#include <iostream>
#include <string>

int main(){
    
    std::ofstream outFile;
    
    outFile.open("myText.txt");

    outFile << "This text will be written to the file!";

   outFile.close();
    
    return 0;

}