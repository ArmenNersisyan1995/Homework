#include<iostream>
#include <string>
#include <fstream>
#include <streambuf>


class Person {
    std::string name;
    int age;
    std::string car;

    public:
    std::string get_name (void) {
        return this -> name;
    }
    void set_name (std::string name) {
        this -> name = name;
    }
};


int main(){
    std::ifstream t("file.json");
    std::string str((std::istreambuf_iterator<char>(t)),
    std::istreambuf_iterator<char>());
    

    Person armen;
    
    std::cout<< "Json file \n" << str <<std::endl;

    return 0;
}