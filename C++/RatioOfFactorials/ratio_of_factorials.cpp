#include<iostream>

//Ratio of factorials

int fact(int a, int b) {
    if(a <= b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if(a <= b ) {
        return 1;
    }
    return fact(a - 1, b) * a;
} 

int main () {

    int a,b;
    std::cin>> a;
    std::cin>> b;
    std::cout<< fact(a, b) <<std::endl;
    
    return 0;
}