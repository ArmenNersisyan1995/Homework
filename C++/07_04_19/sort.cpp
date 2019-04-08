#include <iostream>

void sort(int* arr,char payman);

int main(){

int arr[6];
char payman;
	for(int i = 0; i < 6;++i){
		std::cout<<"arr["<<i<<"] -> ";
		std::cin>>arr[i];
	}
	std::cout<<"masivi elementnery achman kargov dasavorelu hamar mutqagrel -> (+) nshany,nvazman depqum -> (-) nshany"<<std::endl;	
	std::cin>>payman;
	
	sort(arr,payman);

	for(int i = 0; i < 6;++i){
        std::cout<<"arr["<<i<<"] -> ";
        std::cin>>arr[i];
    }

	return 0;
}


void sort(int* arr, char payman){
int max = 0;
int min = 0;
	if(payman == '-'){
		for(int i = 0 ; i < 6 ; ++i){
			for(int j = i + 1 ; j < 6 ; ++j){
				if(arr[i] < arr[j]){
					max = arr[j];
					arr[j] = arr[i];
					arr[i] = max;
				}
			}
		}
	}else
	if(payman == '+'){
		for(int i = 0 ; i < 6 ; ++i){
        	for(int j = i + 1 ; j < 6 ; ++j){
				if(arr[i] > arr[j]){
					min = arr[j];
        			arr[j] = arr[i];
        			arr[i] = min;
    			}
        	}
    	}

	}
}
