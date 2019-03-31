#include<iostream>

void kalkulyator(int value1, char operand, int value2);

int main(int argc, char const *argv[]) {

    int length = 0;
    for(int i = 0; argv[2][i] != '\0'; ++i) {
        ++length;
    }
    
    if(argc != 4 || length != 1 ||
      (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' && argv[2][0] != '.') ) {
        std::cout<< "Invalid command!!!" <<std::endl;
    } else {
        int num1 = 0;
        int num2 = 0;
        char operand = argv[2][0];

        
        if(argv[1][0] == '-') {
            for(int i = 1; argv[1][i] != '\0'; ++i) {
                num1 = num1 * 10 + (argv[1][i] - '0');    
            }
            num1 = num1 * (-1);
        } else {
            for(int i = 0; argv[1][i] != '\0'; ++i) {
                num1 = num1 * 10 + (argv[1][i] - '0');
            }
        }

        if(argv[3][0] == '-') {
        for(int i = 1; argv[3][i] != '\0'; ++i) {
                num2 = num2 * 10 + (argv[3][i] - '0');    
            }
            num2 = num2 * (-1);
        } else {
            for(int i = 0; argv[3][i] != '\0'; ++i) {
                num2 = num2 * 10 + (argv[3][i] - '0');
            }
        }
        // std::cout<< num1 <<std::endl;
        // std::cout<< num2 <<std::endl;
        kalkulyator(num1,operand,num2);
    }
    return 0;
}

void kalkulyator(int value1, char operand, int value2) {
    if(operand == '+') {
        std::cout<< value1 << " " << operand << " " << value2 << " = " << value1 + value2 <<std::endl;
    } else if(operand == '-') {
        std::cout<< value1 << " " << operand << " " << value2 << " = " << value1 - value2 <<std::endl;   
    } else if(operand == '/' && value2 != 0) {
        std::cout<< value1 << " " << operand << " " << value2 << " = " << value1 / value2 <<std::endl;
    } else if(operand == '/' && value2 == 0) {
        std::cout<< "Cannot devided by 0" <<std::endl;
    } else if(operand == '.') {
        std::cout<< value1 << " " << operand << " " << value2 << " = " << value1 * value2 <<std::endl;
    }
}