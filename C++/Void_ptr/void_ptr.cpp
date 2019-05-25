#include<iostream>

class Person {
    int a;
    char b;
    double c;
    int d;
    char e;
    
    public:

    Person() {
        this -> a = 10;
        this -> b = 'b';
        this -> c = 14.5;
        this -> d = 20;
        this -> e = 'e';

    }
    ~Person() {

    }
    int get_a() {
        return this -> a;
    }
    int get_d() {
        return this -> d;
    }
    int* get_addres_a() {
        return &a;
    }
    int* get_addres_d() {
        return &d;
    }
};

int main() {
    Person  person;
    std::cout<<"a = " << person.get_a() <<std::endl;
    
    //before
    std::cout<<"d = " << person.get_d() <<std::endl;


    void* ptr = &person;
    for(int i = 0 ; ; ++i) {
        if( *(int*)(ptr + i) == person.get_d()) {
            std::cout<< "addreses d is --> " << (int*)(ptr + i) <<std::endl;
            *(int *)(ptr + i) = 30;
            break;
        }
    }
    
    //after
    std::cout<< "d = " << person.get_d() <<std::endl;
    
    return 0;
}
