#include<iostream>

void showstring (std::string str,int max_lenght,int begin,int end);
void print (std::string str, int begin, int end);

int main() {
    
    std::string str;
    getline(std::cin,str);
    int max_length = 50;
    
    std::cout<< "\n\n\n" <<std::endl;
    showstring(str,max_length,0, max_length);
    
    return 0;
}

void print (std::string str, int begin, int end) {
    for(begin; begin < end; ++begin) {
        std::cout<< str[begin];
    }
    std::cout<< '\n';
}

 void showstring(std::string str, int max_lenght,int begin,int end){
    
    if(end >= str.length()){
        end = str.length();
        print(str,begin,end);
        return;
    }

    if(str[end] == ' ') {
        print(str,end,begin);
        begin = end +1;
        end = begin + max_lenght;
    } else if(str[end] != ' ') {
        while(str[end] != ' ') {
            --end;
        }
        print(str,begin,end);
        begin = end + 1;
        end = begin + max_lenght;
    }
    showstring(str,max_lenght,begin,end);
 }