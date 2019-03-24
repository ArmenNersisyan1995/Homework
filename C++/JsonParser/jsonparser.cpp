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

    int get_age (int age) {
        return this -> age;
    }

    void set_age (int age){
        this -> age = age;
    }

    std::string get_car (std::string car) {
        return this -> car;
    }

    void set_car (std::string car) {
        this -> car = car;
    }

    Person (void) {
        this -> name = "person";
        this -> age = 18;
        this -> car = "car";
    }

    Person (std::string name, int age, std::string car) {
        this -> name = name;
        this -> car = car;
        this -> age = age;
    }

    ~Person (void) {
        // std::cout<<"Person destructor called" <<std::endl;
    }

    void print (void) {
        std::cout<< "Name : " << this -> name <<std::endl;
        std::cout<< "Age : " << this -> age <<std::endl;
        std::cout<< "Car : " << this -> car <<std::endl;
    }

};

std::string get_firs_object (std::string json) {
    std::string object = "";
    for(int i = 0; i < json.length(); ++i) {
        if(json[i] == '{') {
            for(int j = i + 1; j < json.length(); ++j) {
                if(json[j] == '}') {
                    return object;
                }
                object = object + json[j];
            }
        }
    }
}

void remove_first_object (std::string& json) {
    std::string newJson = "[";
    for(int i = 1; i < json.length(); ++i) {
        if(json[i] == '}') {
            for(int j = i + 2; j < json.length(); ++j) {
                newJson = newJson + json[j];
            }
            json = newJson;
            return;
        }
    }
}

int main(){
    std::ifstream t("file.json");
    std::string json((std::istreambuf_iterator<char>(t)),
    std::istreambuf_iterator<char>());
    
    std::string json_array [4];

    for(int i = 0; i < 4; ++i) {
        json_array[i] = get_firs_object(json);
        remove_first_object(json);
    }
    
    for(int i = 0; i < 4; ++i) {
        std::cout<< json_array[i] <<std::endl;
    }

    return 0;
}