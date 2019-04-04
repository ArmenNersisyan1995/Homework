#include <iostream>

void wins(int x1, int x2, int y1, int y2);

int main(){

int x1,y1,x2,y2;
std::cout<<" nermucel taguhu kordinatner@ "<<std::endl;
std::cout<<"x1-> ";
std::cin>>x1;
std::cout<<"y1-> ";
std::cin>>y1;

std::cout<<" nermucel dziu kordinatner@ "<<std::endl;
std::cout<<"x2-> ";
std::cin>>x2;
std::cout<<"y2-> ";
std::cin>>y2;

wins(x1,x2,y1,y2);
	return 0;
}

void wins(int x1, int x2, int y1, int y2){
	if(x1 == x2 && y1 == y2){
		std::cout<<"shaxmati mek vandakum chi karox linel miajamanak erku figur"<<std::endl;
		
	}
	
	if(x1 > 7 || x1 < 0 || x2 > 7 || x2 < 0 || y1 > 7 || y1 < 0 || y2 > 7 || y2 < 0){
		std::cout<<"sxal kordinat"<<std::endl;
	}

	if(x1 == x2 || y1 == y2 || (x1 - y1) == (x2 - y2) || (y1 - x1) == (y2 - x2)){
		std::cout<< x1 << y1 << " , " << x2 << y2 << "   Quenn Wins !! "<<std::endl;
	}else
	if((x2 + y2) - (x1 + y1) == 3 || (x2 + y2) - (x1 + y1) == 1 || (x1 +y1) -(x2 + y2) == 1 || (x1 +y1) -(x2 + y2) == 3){
		std::cout<< x1 << y1 << " , " << x2 << y2 <<"    Hors   Wins !! "<<std::endl;
	}else{
		std::cout<< x1 << y1 << " , " << x2 << y2 <<" No one Wins !! "<<std::endl;
		 }	

}

