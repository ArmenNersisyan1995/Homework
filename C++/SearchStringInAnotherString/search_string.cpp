#include<iostream>
#include<string>

bool search_string_in_another_string(std::string str,std::string name);

int main() {

    std::string name;
    std::string str = "Karen Armen Peto Benik Zorik";
    std::cout<< "str =  " << str << std::endl;
    std::cout<< "Input your text -> ";
    getline(std::cin,name);
    
    if (search_string_in_another_string(str,name)) {
        std::cout<< "Found" <<std::endl;
    } else {
        std::cout<< "Not found" <<std::endl;
    }

    return 0;
}

bool search_string_in_another_string(std::string str, std::string name) {  
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == name[0]) {
            for(int j = 1; j < name.length(); ++j) {
                if( str[i + j] != name[j]) {
                    return false;
                }
            }
            return true;
        }
    }
}