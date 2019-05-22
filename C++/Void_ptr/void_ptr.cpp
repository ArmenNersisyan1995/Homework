#include<iostream>

class Person {
    int a;
    int b;
    
    public:

    Person() {
        this -> a = 10;
        this -> b = 20;

    }
    ~Person() {

    }
    int get_a() {
        return this -> a;
    }
    int get_b() {
        return this -> b;
    }
    int* get_addres_a() {
        return &a;
    }
    int* get_addres_b() {
        return &b;
    }
};

int main() {
    Person  person;
    std::cout<<"a = " << person.get_a() <<std::endl;
    std::cout<<"b = " << person.get_b() <<std::endl;


    void* ptr = &person;
    
    if(ptr + 4 == person.get_addres_b()) {
        std::cout<< "addreses b is equal --> ptr + 4" <<std::endl;
    }
    
    std::cout<< *(int *)(ptr + 4) <<std::endl;
    
    return 0;
}