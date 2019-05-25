#include<iostream>
#include<string>

class Person {
    std::string name;
    int age;

    friend void set_data(Person&, std::string, int);
    friend std::string get_name(Person&);
    friend int get_age(Person&);

    public:

    Person() {
        this -> name = "Person";
        this -> age = 10;
    }
    ~Person() {

    }
    void print() {
        std::cout<< "Name ->  " << this -> name <<std::endl;
        std::cout<< "Age  ->  " << this -> age <<std::endl;
        std::cout<< "=========================" <<std::endl;
    }
    void set_data(std::string, int);
    std::string get_name();
    int get_age();
};

void Person::set_data(std::string name,int age) {
    this -> name = name;
    this -> age = age;
}
std::string Person::get_name() {
    return this -> name;
}
int Person::get_age() {
    return this -> age;
}

void set_data(Person& person,std::string name,int age) {
    person.name = name;
    person.age = age;
}
std::string get_name(Person& person) {
    return person.name;
}
int get_age(Person& person) {
    return person.age;
}

int main() {
    Person person;

    person.print();
    person.set_data("Karen",24);
    person.print();
    set_data(person,"Vle",145);
    person.print();

    return 0;
}