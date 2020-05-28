#include <iostream>

void revers(int* arr);

int main(){

int arr[6];

	for(int i = 0; i < 6; ++i ){
		std::cout<<"arr["<<i<<"] -> ";
		std::cin>>arr[i];
	}

	std::cout<<"###################################"<<std::endl;

	revers(arr);

	for(int i = 0; i < 6; ++i ){
    std::cout<<"arr["<< i <<"] -> "<<arr[i] <<std::endl;
    }


	return 0;
}

void revers(int* arr){
	int bufer = 0;
	for(int i = 0, j = 5; i < 3, j >=3; ++i , --j){
		bufer = arr[i];
	    arr[i] = arr[j];
		arr[j] = bufer;	
	}
}
