//Diagonal matrix
//row ar column same hote hobe

// this is for secondary diagonal 
#include<stdio.h>


int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // diagonal true 
    int flag=1;

    // checking whether square 
    if(row !=col){
        flag=0;
    }
    //00 11 22 tah value diagonal
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            if(i+j == row-1){
                continue;
            }
            //checking diagonal chara 
            //kono value zero nai naki
            if(a[i][j] != 0){
                flag = 0;
            }
        }
    }


    if(flag == 1){
        printf("diagonal\n");
    }
    else{
        printf("not diagonal\n");
    }
    return 0;
}