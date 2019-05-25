#include<iostream>

class Car {
    protected:
    std::string firma;
    
    public:
    void get_option() {
        std::cout<< "Firma -> " << this -> firma <<std::endl;
        std::cout<< "--------------------------" <<std::endl;
    }
    Car() {
        this -> firma = "Unknown";
    }
};

class Mers : public Car {
    protected:
    std::string model;
    public:
    void get_option() {
        std::cout<< "Firma -> " << this -> firma <<std::endl;
        std::cout<< "model -> " << this -> model <<std::endl;
        std::cout<< "--------------------------" <<std::endl;
    }
    Mers() {
        this -> firma = "Mers";
        this -> model = "Unknown";
    }
};

class S_Class : public Mers{
    public:
    void get_option() {
        std::cout<< "Firma -> " << this -> firma <<std::endl;
        std::cout<< "model -> " << this -> model <<std::endl;
        std::cout<< "--------------------------" <<std::endl;
    }
    S_Class () {
        this -> model = "S class";
    }
};

int main() {

    Car car;
    car.get_option();

    Mers mers;
    mers.get_option();

    S_Class my_car;
    my_car.get_option();

    return 0;
}