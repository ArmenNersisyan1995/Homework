#include <iostream>

int mecbazm(int a, int b, int c);

int main(){

	int a,b,c;
	std::cout<<"nermucel 453 bnakan tiv"<<std::endl;
	std::cout<<" a-> ";
	std::cin>> a;
	std::cout<<" b-> ";
	std::cin>> b;
	std::cout<<" c-> ";
	std::cin>> c;
	mecbazm(a,b,c);

    return 0;
}

int mecbazm(int a, int b, int c){

	if(a == 0 && b == 0 && c == 0){
		std::cout<<"a,b,c tveri amenamec @ndhanur bazmapatikn e -> 0"<<std::endl;
		return 1;
	}
		
	if(a <= 0 || b <= 0 || c <= 0){
		std::cout<<"tvyal tveri sharq@ chi karox unenal @ndhanur bazmapatik"<<std::endl;
		return 1;
	}
	int max = a;
	int arr[3] = {a,b,c};
	for(int i = 1; i < 3; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	while(max % a != 0 || max % b != 0 || max % c != 0) {
		max = max * 2;
	}
	if(max == 0) {
		 std::cout<<"tvyal tveri sharq@ chuni @ndhanur bazmapatiki"<<std::endl;		
	} else {
		std::cout<<"a,b,c tveri amenamec @ndhanur bazmapatikn e ->"<< max <<std::endl;
	}
}
		
