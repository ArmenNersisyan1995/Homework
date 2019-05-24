#include<iostream>

void showarr(char arr[12][12]);
void  move (char arr[12][12],char &,int &, int &);

int main(){


int i = 2;               //syuneri indeksnery
int j = 0;               //toxeri indeksnery
char uxutyun = '>';  // skzbnakan pahin obyekti gtnvelu vayry ev uxutyuny

char arr[12][12] = {

        '#','#','#','#','#','#','#','#','#','#','#','#',
        '#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',
        '0',' ','#',' ','#',' ','#','#','#','#',' ','#',
        '#','#','#',' ','#',' ',' ',' ',' ','#',' ','#',
        '#',' ',' ',' ',' ','#','#','#',' ','#',' ','#', //<--- kety ete poxenq # nshanov
        '#','#','#','#',' ','#',' ','#',' ','#',' ','#', //     obyekty elq chgtnelov het kga ir 
        '#',' ',' ','#',' ','#',' ','#',' ','#',' ','#', //     skzbnakan vichak. cragiry kasi
        '#','#',' ','#',' ','#',' ','#',' ','#',' ','#', //     vor eql chka
        '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
        '#','#','#','#','#','#',' ','#','#','#',' ','#',
        '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
        '#','#','#','#','#','#','#','#','#','#','#','#'
    };
	move(arr,uxutyun,i,j);

	return 0;
}

void showarr(char arr[12][12]) {
	for(int i = 0 ; i < 12; ++i){
    	for(int j = 0; j < 12; ++j ){
        	std::cout<<arr[i][j]<<" ";
    	}
    	std::cout<<""<<std::endl;
	}      
}

void  move (char arr[12][12],char &uxutyun,int &i, int &j) {

	if(arr[i][j] == '0'  &&  j == 11  || i == 11 || i == 0) {
		std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
		std::cout<<"ketum durs ekav labirintic"<<std::endl;
		return;
	}
	
	switch(uxutyun)	{
		case '>':
			if(arr[i - 1][j] == ' ') {
                uxutyun = '^';
                --i;
                arr[i][j] = '0';
				arr[i+1][j] = ' ';  
			} else if(arr[i+1][j] == ' ') {
				uxutyun = 'v';
				++i;
				arr[i][j] = '0';
				arr[i-1][j] = ' ';
			} else if(arr[i][j+1] == ' ') {
				uxutyun = '>';
				++j;
				arr[i][j] = '0';
				arr[i][j-1] = ' ';
			} else {
				uxutyun = '<';
			}	
			break;
		case '^':
			if(arr[i][j-1] == ' ') {
				uxutyun = '<';
				--j;
				arr[i][j] = '0';
				arr[i][j+1] = ' ';
			} else if(arr[i][j+1] == ' ') {
				uxutyun = '>';
				++j;
				arr[i][j] = '0';
				arr[i][j-1] = ' ';
			} else if(arr[i-1][j] == ' ') {
				uxutyun = '^';	
				--i;
				arr[i][j] = '0';
				arr[i+1][j] = ' ';
			} else {
				uxutyun = 'v';
			}						
			break;
		case '<':
			if(arr[i+1][j] == ' ') {
				uxutyun = 'v';
				++i;
				arr[i][j] = '0';
				arr[i-1][j] = ' ';
			} else if(arr[i-1][j] == ' ') {
				uxutyun = '^';
				--i;
				arr[i][j] = '0';
				arr[i+1][j] = ' ';
			} else if(arr[i][j-1] == ' ') {
				uxutyun = '<';
				--j;
				arr[i][j] = '0';
				arr[i][j+1] = ' ';
			} else {
				uxutyun = '>';
			} 
            break;
		case 'v':
			if(arr[i][j + 1] == ' ') {
				uxutyun = '>';
				++j;
				arr[i][j] = '0';
				arr[i][j-1] = ' ';
			} else if(arr[i][j-1] == ' ') {
				uxutyun = '<';
				--j;
				arr[i][j] = '0';
				arr[i][j+1] = ' ';
			} else if(arr[i+1][j] == ' ') {
				uxutyun = 'v';
				++i;
				arr[i][j] = '0';
				arr[i-1][j] = ' ';
			} else {
				uxutyun = '^';
			}
			break;
	}
	if(arr[i][j] == '0' && i == 2 && j ==0) {
        std::cout<<"elq chka"<<std::endl;
       	return;
   	}

	std::cout<<" uxutyuny "<< uxutyun <<std::endl;
	std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
	showarr(arr);
	std::cin.ignore();
	move (arr,uxutyun,i,j);
}	



