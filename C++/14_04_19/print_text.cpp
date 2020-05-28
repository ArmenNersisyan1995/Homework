#include<iostream>

void showstring (std::string str,int max_lenght,int begin,int end,int max_length);
void print (std::string str, int begin, int end);

int main() {
    
    std::string str;
    getline(std::cin,str);
    int max_length;
    std::cout<< "\nInput max length of text -> ";
    std::cin>> max_length; 
    
    std::cout<< "\n\n\n" <<std::endl;
    showstring(str,max_length,0, max_length,max_length);
    
    return 0;
}

void print (std::string str, int begin, int end, int max_length) {
    std::cout<< "| ";
    int count = 0;
    for(begin; begin < end; ++begin) {
        ++count;
        std::cout<< str[begin];
    }
    for(count + 1; count < max_length + 1; ++count) {
        std::cout<< ' ';
    }

    std::cout<< "|\n";
}

 void showstring(std::string str, int max_lenght,int begin,int end,int max_length) {
    if(begin == 0) {
        for(int i = 0; i < max_lenght + 4; i++) {
            std::cout<< "_";
        }
        std::cout<< "\n\n";
    }

    if(end >= str.length()) {
        end = str.length();
        print(str,begin,end, max_length);
        for(int i = 0; i < max_lenght + 4; i++) {
            std::cout<< "_";
        }
        std::cout<< "\n\n";
        return;
    }

    if(str[end] == ' ') {
        print(str,end,begin, max_length);
        begin = end +1;
        end = begin + max_lenght;
    } else if(str[end] != ' ') {
        while(str[end] != ' ') {
            --end;
        }
        print(str,begin,end,max_length);
        begin = end + 1;
        end = begin + max_lenght;
    }
    showstring(str,max_lenght,begin,end,max_length);
 }