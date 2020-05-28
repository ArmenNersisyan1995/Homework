#include<iostream>

void date_diff (std::string first_date , std::string second_date) {
    
    int jam = 0;
    int rope  = 0;
    int jam1 = 0;
    int rope1  = 0;

    int i = 0;
    for(i = 0; i < first_date.length(); ++i) {
        if(first_date[i] != ':') {
            jam1 = jam1 * 10 + (second_date[i] - '0');
            jam = jam * 10 + (first_date[i] - '0');
        } else {
            break;
        }
    }
    for(int j = i + 1; j < first_date.length(); ++j) {
        rope1 = rope1 * 10 + (second_date[j] - '0');
        rope = rope * 10 + (first_date[j] - '0');
    }

    if(jam > 24 || rope > 60 || jam1 > 24 || rope1 > 60){
        std::cout<<"sxal jami format"<<std::endl;
        return;
    }
    int diff = 0;
    if(jam1 > jam ) {
        diff = ((jam1 * 60) + rope1) - ((jam * 60) + rope);
        std::cout<< diff << " rope" <<std::endl;
    } else if (jam1 == jam) {
        if(rope1 > rope){
           diff = ((jam1 * 60) + rope1) - ((jam * 60) + rope); 
           std::cout<<diff<<"rope"<<std::endl;
        }
    } else {
        std::cout<<"jaj tav vret BENO"<<std::endl;
    }
}

int main () {

    //Date format hh:mm , example 13:45
    
    std::string first_date;
    std::string second_date;
    std::cout<< "first_date"<<std::endl;
    getline(std::cin,first_date);
    std::cout<<"second_date"<<std::endl;
    getline(std::cin,second_date);

    date_diff(first_date,second_date);
    //std::cout<< date_diff(first_date,second_date) <<std::endl;

    return 0;
}