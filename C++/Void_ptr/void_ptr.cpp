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
    
    //before
    std::cout<<"b = " << person.get_b() <<std::endl;


    void* ptr = &person;
    for(int i = 0 ; ; ++i) {
        if( *(int*)(ptr + i) == person.get_b()) {
            std::cout<< "addreses b is --> " << (int*)(ptr + i) <<std::endl;
            *(int *)(ptr + i) = 30;
            break;
        }
    }
    
    //after
    std::cout<< "b = " << person.get_b() <<std::endl;
    
    return 0;
}