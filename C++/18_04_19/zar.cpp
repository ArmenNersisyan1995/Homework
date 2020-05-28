#include<iostream>

void zar(char **arr,int tiv, int i);
void zarpc(char **arrpc,int tivpc,int j);

int main(){
	srand (time(NULL));
	int hashivpc = 0;
	int hashiv = 0;
	int tiv = 0;
	int tivpc = 0;
	int syun = 3;
	int tox = 25; 
	char **arr = new char* [syun];
	char **arrpc = new char* [syun];
	for(int i = 0; i < syun ; ++i){
		arr[i] = new char[tox];
		arrpc[i] = new char[tox];
	}


	for(int i = 0; i < syun; ++i){
		for(int j = 0; j < tox; ++j){
			arr[i][j] = ' ';
			arrpc[i][j] = ' ';
		}
	}

	for(int i = 0; i < syun; ++i){
        for(int j = 0; j < tox; j = j + 4){
            arr[i][j] = '#';
			arrpc[i][j] = '#';
        }
    }
	for(int i = 0; i < 6; ++i){	
		tiv = rand() % 6 + 1;
		zar(arr,tiv,i);		
	   	hashiv = hashiv + tiv;
		tivpc = rand() % 6 + 1;
		zarpc(arrpc,tivpc,i);
		hashivpc = hashivpc + tivpc;
		
	}
	std::cout<<"\t\t###################### xaxi  avart  (the end) #######################################"<<std::endl;
	std::cout<<"\t\t###################### xaxi verjnakan miavorneri ampopum ############################"<<std::endl;
	std::cout<<"\t\t-------------------------------------------------------------------------------------"<<std::endl;
	std::cout<<"\t\t xaxarkox "<<std::endl;	
	for(int i = 0 ; i < syun ; ++i){
		std::cout<<"\t\t";
        for(int j = 0 ; j < tox ; ++j){
			std::cout<<arr[i][j];
        }
		std::cout<<"\n";
    }
	std::cout<<"\t\t hamakargich"<<std::endl;
	for(int i = 0; i < syun; ++i){
		std::cout<<"\t\t";
        for(int j = 0; j < tox; ++j){
           std::cout<<arrpc[i][j];
        }
        std::cout<<"\n";
    }
	if(hashiv > hashivpc){
		std::cout<<"\t\t\t\t"<<"xaxarkox("<<hashiv<<")\t"<<"hamakargich("<<hashivpc<<")"<<"\thaxtec xaxarkoxy\n";
	}else if(hashiv < hashivpc){
		std::cout<<"\t\t\t\t"<<"xaxarkox("<<hashiv<<")\t"<<"hamakargich("<<hashivpc<<")"<<"\thaxtec hamakargichy\n";
	}else{
		std::cout<<"\t\t\t\t"<<"xaxarkox("<<hashiv<<")\t"<<"hamakargich("<<hashivpc<<")"<<"\txaxn avartvec voch ovqi\n";
	}



	for(int i = 0; i < syun ; ++i){
        delete [] arr[i];
		delete [] arrpc[i];
    }
	
	delete[] arr;
	delete [] arrpc;
	return 0;
}

void zar(char **arr,int tiv, int i){
	std::cout<<"xaxarkox"<<std::endl;
	std::cout<<tiv<<std::endl;
	switch(tiv){
	case 1:
		if(tiv == 1){
			std::cout<<" * ";
			if(i == 0){
				arr[1][2] = '*';
			}else if(i == 1){
				arr[1][6] = '*';
			}else if(i == 2){
				arr[1][10] = '*';
			}else if(i == 3){
				arr[1][14] = '*';
            }else if(i == 4){
				arr[1][18] = '*';
            }else if(i == 5){
				arr[1][22] = '*';
            }					
		}
		break;
	case 2:
		if(tiv == 2){
			std::cout<<" * * ";
			if(i == 0){
                arr[1][1] = '*';
				arr[1][3] = '*';
            }else if(i == 1){
				arr[1][5] = '*';
				arr[1][7] = '*';
            }else if(i == 2){
                arr[1][9] = '*';
				arr[1][11] = '*';
            }else if(i == 3){
                arr[1][13] = '*';
				arr[1][15] = '*';
            }else if(i == 4){
                arr[1][17] = '*';
				arr[1][19] = '*';
            }else if(i == 5){
                arr[1][21] = '*';
				arr[1][23] = '*';
            }
        }
		break;
	case 3:
		if(tiv == 3){
            std::cout<<"* \n * \n  *";
			if(i == 0){
            	arr[0][1] = '*';
            	arr[1][2] = '*';
            	arr[2][3] = '*';
            }else if(i == 1){
                arr[0][5] = '*';
                arr[1][6] = '*';
                arr[2][7] = '*';
            }else if(i == 2){
                arr[0][9] = '*';
                arr[1][10] = '*';
                arr[2][11] = '*';
            }else if(i == 3){
				arr[0][13] = '*';
                arr[1][14] = '*';
                arr[2][15] = '*';             
            }else if(i == 4){
				arr[0][17] = '*';
                arr[1][18] = '*';
                arr[2][19] = '*';	              
            }else if(i == 5){
                arr[0][21] = '*';
                arr[1][22] = '*';
                arr[2][23] = '*';
            }

        }
		break;
	case 4:
		if(tiv == 4){
            std::cout<<"* * \n* *";
			if(i == 0){
                arr[0][1] = '*';
                arr[0][3] = '*';
                arr[2][1] = '*';
                arr[2][3] = '*';
            }else if(i == 1){
                arr[0][5] = '*';
                arr[0][7] = '*';
                arr[2][5] = '*';
                arr[2][7] = '*';
            }else if(i == 2){
                arr[0][9] = '*';
                arr[0][11] = '*';
                arr[2][9] = '*';
                arr[2][11] = '*';
            }else if(i == 3){
                arr[0][13] = '*';
                arr[0][15] = '*';
                arr[2][13] = '*';
                arr[2][15] = '*';
            }else if(i == 4){
                arr[0][17] = '*';
                arr[0][19] = '*';
                arr[2][19] = '*';
				arr[2][17] = '*';
            }else if(i == 5){
                arr[0][21] = '*';
                arr[2][21] = '*';
                arr[0][23] = '*';
				arr[2][21] = '*';
            }

        }
		break;
	case 5:
		if(tiv == 5){
            std::cout<<"* * \n * \n* *";
			if(i == 0){
                arr[0][1] = '*';
                arr[0][3] = '*';
				arr[1][2] = '*';
                arr[2][1] = '*';
                arr[2][3] = '*';
            }else if(i == 1){
                arr[0][5] = '*';
                arr[0][7] = '*';
				arr[1][6] = '*';
                arr[2][5] = '*';
                arr[2][7] = '*';
            }else if(i == 2){
                arr[0][9] = '*';
                arr[0][11] = '*';
				arr[1][10] = '*';
                arr[2][9] = '*';
                arr[2][11] = '*';
            }else if(i == 3){
                arr[0][13] = '*';
                arr[0][15] = '*';				 
				arr[2][5] = '*';
				arr[1][14] = '*';
                arr[2][13] = '*';
                arr[2][15] = '*';
            }else if(i == 4){
                arr[0][17] = '*';
                arr[0][19] = '*';
				arr[1][18] = '*';
                arr[2][19] = '*';
                arr[2][17] = '*';
            }else if(i == 5){
                arr[0][21] = '*';
                arr[2][23] = '*';
				arr[1][22] = '*';
                arr[0][23] = '*';
				arr[2][21] = '*';
            }
        }
		break;
	case 6:
		if(tiv == 6){
            std::cout<<"* *\n* *\n* *";
			if(i == 0){
                arr[0][1] = '*';
                arr[0][3] = '*';
                arr[2][1] = '*';
                arr[2][3] = '*';
				arr[1][1] = '*';
				arr[1][3] = '*';
            }else if(i == 1){
                arr[0][5] = '*';
                arr[0][7] = '*';
                arr[2][5] = '*';
                arr[2][7] = '*';
				arr[1][5] = '*';
                arr[1][7] = '*';
            }else if(i == 2){
                arr[0][9] = '*';
                arr[0][11] = '*';
                arr[2][9] = '*';
                arr[2][11] = '*';
				arr[1][9] = '*';
                arr[1][11] = '*';
            }else if(i == 3){
                arr[0][13] = '*';
                arr[0][15] = '*';
                arr[2][13] = '*';
                arr[2][15] = '*';
				arr[1][13] = '*';
                arr[1][15] = '*';
            }else if(i == 4){
                arr[0][17] = '*';
                arr[0][19] = '*';
                arr[2][19] = '*';
                arr[2][17] = '*';
				arr[1][17] = '*';
                arr[1][19] = '*';
            }else if(i == 5){
                arr[0][21] = '*';
                arr[2][21] = '*';
                arr[0][23] = '*';
                arr[2][21] = '*';
				arr[1][21] = '*';
                arr[1][23] = '*';
            }

        }
		break;
	}
	std::cin.ignore();
}
void zarpc(char **arrpc,int tivpc,int i){
	std::cout<<"hamakargich"<<std::endl;	
	std::cout<<tivpc<<std::endl;      
    switch(tivpc){
    case 1:
        if(tivpc == 1){
            std::cout<<" * ";
            if(i == 0){
                arrpc[1][2] = '*';
            }else if(i == 1){
                arrpc[1][6] = '*';
            }else if(i == 2){
                arrpc[1][10] = '*';
            }else if(i == 3){
                arrpc[1][14] = '*';
            }else if(i == 4){
                arrpc[1][18] = '*';
            }else if(i == 5){
                arrpc[1][22] = '*';
            }
        }
        break;
	case 2:
        if(tivpc == 2){
            std::cout<<" * * ";
            if(i == 0){
                arrpc[1][1] = '*';
                arrpc[1][3] = '*';
            }else if(i == 1){
                arrpc[1][5] = '*';
                arrpc[1][7] = '*';
            }else if(i == 2){
                arrpc[1][9] = '*';
                arrpc[1][11] = '*';
            }else if(i == 3){
                arrpc[1][13] = '*';
                arrpc[1][15] = '*';
            }else if(i == 4){
                arrpc[1][17] = '*';
                arrpc[1][19] = '*';
            }else if(i == 5){
                arrpc[1][21] = '*';
                arrpc[1][23] = '*';
            }
        }
        break;
	 case 3:
        if(tivpc == 3){
            std::cout<<"* \n * \n  *";
            if(i == 0){
                arrpc[0][1] = '*';
                arrpc[1][2] = '*';
                arrpc[2][3] = '*';
            }else if(i == 1){
                arrpc[0][5] = '*';
                arrpc[1][6] = '*';
                arrpc[2][7] = '*';
            }else if(i == 2){
                arrpc[0][9] = '*';
                arrpc[1][10] = '*';
                arrpc[2][11] = '*';
            }else if(i == 3){
                arrpc[0][13] = '*';
                arrpc[1][14] = '*';
                arrpc[2][15] = '*';
            }else if(i == 4){
                arrpc[0][17] = '*';
                arrpc[1][18] = '*';
                arrpc[2][19] = '*';
            }else if(i == 5){
                arrpc[0][21] = '*';
                arrpc[1][22] = '*';
                arrpc[2][23] = '*';
            }

        }
        break;
			case 4:
        if(tivpc == 4){
            std::cout<<"* * \n* *";
            if(i == 0){
                arrpc[0][1] = '*';
                arrpc[0][3] = '*';
                arrpc[2][1] = '*';
                arrpc[2][3] = '*';
            }else if(i == 1){
                arrpc[0][5] = '*';
                arrpc[0][7] = '*';
                arrpc[2][5] = '*';
                arrpc[2][7] = '*';
            }else if(i == 2){
                arrpc[0][9] = '*';
                arrpc[0][11] = '*';
                arrpc[2][9] = '*';
                arrpc[2][11] = '*';
            }else if(i == 3){
                arrpc[0][13] = '*';
                arrpc[0][15] = '*';
                arrpc[2][13] = '*';
                arrpc[2][15] = '*';
            }else if(i == 4){
                arrpc[0][17] = '*';
                arrpc[0][19] = '*';
                arrpc[2][19] = '*';
                arrpc[2][17] = '*';
            }else if(i == 5){
                arrpc[0][21] = '*';
                arrpc[2][21] = '*';
                arrpc[0][23] = '*';
                arrpc[2][21] = '*';
            }

        }
        break;
			case 5:
        if(tivpc == 5){
            std::cout<<"* * \n * \n* *";
            if(i == 0){
                arrpc[0][1] = '*';
                arrpc[0][3] = '*';
                arrpc[1][2] = '*';
                arrpc[2][1] = '*';
                arrpc[2][3] = '*';
            }else if(i == 1){
                arrpc[0][5] = '*';
                arrpc[0][7] = '*';
                arrpc[1][6] = '*';
                arrpc[2][5] = '*';
                arrpc[2][7] = '*';
            }else if(i == 2){
                arrpc[0][9] = '*';
                arrpc[0][11] = '*';
                arrpc[1][10] = '*';
                arrpc[2][9] = '*';
                arrpc[2][11] = '*';
            }else if(i == 3){
                arrpc[0][13] = '*';
                arrpc[0][15] = '*';
                arrpc[2][5] = '*';
                arrpc[1][14] = '*';
                arrpc[2][13] = '*';
                arrpc[2][15] = '*';
            }else if(i == 4){
                arrpc[0][17] = '*';
                arrpc[0][19] = '*';
                arrpc[1][18] = '*';
                arrpc[2][19] = '*';
                arrpc[2][17] = '*';
            }else if(i == 5){
                arrpc[0][21] = '*';
                arrpc[2][23] = '*';
                arrpc[1][22] = '*';
                arrpc[0][23] = '*';
                arrpc[2][21] = '*';
            }
        }
		break;
			case 6:
		if(tivpc == 6){
           	if(i == 0){
                arrpc[0][1] = '*';
                arrpc[0][3] = '*';
                arrpc[2][1] = '*';
                arrpc[2][3] = '*';
                arrpc[1][1] = '*';
                arrpc[1][3] = '*';
            }else if(i == 1){
                arrpc[0][5] = '*';
                arrpc[0][7] = '*';
                arrpc[2][5] = '*';
                arrpc[2][7] = '*';
                arrpc[1][5] = '*';
                arrpc[1][7] = '*';
            }else if(i == 2){
                arrpc[0][9] = '*';
                arrpc[0][11] = '*';
                arrpc[2][9] = '*';
                arrpc[2][11] = '*';
                arrpc[1][9] = '*';
                arrpc[1][11] = '*';
            }else if(i == 3){
                arrpc[0][13] = '*';
                arrpc[0][15] = '*';
                arrpc[2][13] = '*';
                arrpc[2][15] = '*';
                arrpc[1][13] = '*';
                arrpc[1][15] = '*';
            }else if(i == 4){
                arrpc[0][17] = '*';
                arrpc[0][19] = '*';
                arrpc[2][19] = '*';
                arrpc[2][17] = '*';
                arrpc[1][17] = '*';
                arrpc[1][19] = '*';
            }else if(i == 5){
                arrpc[0][21] = '*';
                arrpc[2][21] = '*';
                arrpc[0][23] = '*';
                arrpc[2][21] = '*';
                arrpc[1][21] = '*';
                arrpc[1][23] = '*';
            }

        }
        break;
    }
    std::cin.ignore();
}

