#include<iostream>

void  move (char arr[12][12],char &,int &, int & );

int main() {

    int i;               //syuneri indeksnery
    int j;               //toxeri indeksnery
    char uxutyun = '>';  // skzbnakan pahin obyekti gtnvelu vayry ev uxutyuny
    i = 2;               //
    j = 0;               //
    std::cout<<"\nSexmeq ENTER vorpesi tesneq obyekti hajord qaylery\n";

    char arr[12][12] = {

        '#','#','#','#','#','#','#','#','#','#','#','#',
        '#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
        ' ',' ','#',' ','#',' ','#','#','#','#',' ','#',
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

    move(arr,uxutyun,i,j);

    return 0;
}

void  move (char arr[12][12],char &uxutyun,int &i, int &j ){
    //TODO
}