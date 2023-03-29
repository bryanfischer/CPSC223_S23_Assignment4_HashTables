#include "Main.h"

int main(int argc, char* argv[]){

    // read the data from a file into a vector
    std::vector<City*> vec;
    std::string fileName = "dataset.csv";
    Parser::parseFile(fileName, vec);
    
    //you write the tests

    return 0;
}