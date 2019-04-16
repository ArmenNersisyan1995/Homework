#include<iostream>

void showstring (std::string str,int max_length,int begin,int end,int chap);
void print (std::string str, int begin, int end,int chap);

int main() {
    
    std::string str;
    getline(std::cin,str);
    int max_length = 50;
    
    std::cout<< "\n\n\n" <<std::endl;
	for(int i = 0; i <= max_length; ++i){
		std::cout<<"#";
	}
	std::cout<<" "<<std::endl;
    showstring(str,max_length,0, max_length,0);
    
    return 0;
}

void print (std::string str, int begin, int end,int chap) {
	std::cout<<"#";
    for(begin; begin < end; ++begin) {
        std::cout<< str[begin];
    }
	for(int j = 1; j < chap; ++j){
		std::cout<<" ";
	}
	std::cout<<"#";
    std::cout<< '\n';
}

 void showstring(std::string str, int max_length,int begin,int end,int chap){
    
    if(end >= str.length()){
		chap = end - str.length();
        end = str.length();
        print(str,begin,end,chap);

		for(int i = 0; i <=max_length; ++i){
    		std::cout<<"#";
	    }

        return;
    }
	

    if(str[end] == ' ') {
		chap = max_length - (end - begin);
        print(str,end,begin,chap);
        begin = end +1;
        end = begin + max_length;
		
    } else if(str[end] != ' ') {
        while(str[end] != ' ') {
            --end;
        }
		chap =  max_length	- (end - begin);
        print(str,begin,end,chap);
        begin = end + 1;
        end = begin + max_length;
    }

    showstring(str,max_length,begin,end,chap);
 }

