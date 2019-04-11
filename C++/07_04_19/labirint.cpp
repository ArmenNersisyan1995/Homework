#include<iostream>

void showarr(char arr[12][12]);
char  move (char arr[12][12],char &,int &, int &);

int main(){


int i = 2;               //syuneri indeksnery
int j = 0;               //toxeri indeksnery
char uxutyun = '>';  // skzbnakan pahin obyekti gtnvelu vayry ev uxutyuny

char arr[12][12] = {

        '#','#','#','#','#','#','#','#','#','#','#','#',
        '#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
        '0',' ','#',' ','#',' ','#','#','#','#',' ','#',
        '#','#','#',' ','#',' ',' ',' ',' ','#',' ','#',
        '#',' ',' ',' ',' ','#','#','#',' ','#',' ',' ', //<--- kety ete poxenq # nshanov
        '#','#','#','#',' ','#',' ','#',' ','#',' ','#', //     obyekty elq chgtnelov het kga ir 
        '#',' ',' ','#',' ','#',' ','#',' ','#',' ','#', //     skzbnakan vichak. cragiry kasi
        '#','#',' ','#',' ','#',' ','#',' ','#',' ','#', //     vor eql chka
        '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
        '#','#','#','#','#','#',' ','#','#','#',' ','#',
        '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
        '#','#','#','#','#','#','#','#','#','#','#','#'
    };
showarr(arr);

move(arr,uxutyun,i,j);
showarr(arr);

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

char  move (char arr[12][12],char &uxutyun,int &i, int &j){
std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
	if(arr[i][11] == ' ' || arr[11][j] == ' ' || arr[0][j] == ' ' || arr[i][0] == ' '){
		if(arr[i][0] == ' ' && i == 2){
			std::cout<<"elq chgtnelov veradarcav zkzbnakan vi&ak"<<std::endl;
			return 1;
		}//else{
			//std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
			//std::cout<<"ketum durs ekav labirintic"<<std::endl;
			//return 2;
		 	//}
	}
	if(arr[i][j + 1] == ' '){
		++j;
		arr[i][j] = '0';
		uxutyun = '>';
		move(arr,uxutyun,i,j);
	}else 
		if(arr[i][j + 1] == '#'){
			if(arr[i+1][j] == ' '){
			++i;
			arr[i][j] = '0';
    	    uxutyun = 'v';
	        move(arr,uxutyun,i,j);
			}else
				if(arr[i-1][j] == ' '){
					--i;
					arr[i][j] = '0';
		            uxutyun = '^';
        		    move(arr,uxutyun,i,j);

				}else
					if(arr[i-1][j] == '#' && arr[i][j+1] == '#'){
						while(arr[i][j-1] == ' ') {
						--j;
						arr[i][j] = '0';
                    	uxutyun = '<';
	                   	move(arr,uxutyun,i,j);
						}
					
					}	
					

		 }
	

	    
			


		
	//switch(uxutyun)
	//{
	//	case '>':
	//			std::cout<<"uxutyun@ aj  "<<uxutyun<<std::endl;
	//			std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
	//			break;
	//	case '<':
	//			std::cout<<"uxutyun@ dzax  "<<uxutyun<<std::endl;
      //          std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
		//		break;
		//case '^':
          //      std::cout<<"uxutyun@ verev "<<uxutyun<<std::endl;
            //    std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
              //  break;
		//case 'v':
         //       std::cout<<"uxutyun@ nerqev  "<<uxutyun<<std::endl;
         //       std::cout<<"i = "<<i<<", j = "<<j<<std::endl;
         //       break;

	//}
}
	



