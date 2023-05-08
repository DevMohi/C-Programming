#include<stdio.h>
//Scalar matrix row column same hote hobe


int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int flag=1;

    // checking whether square 
    if(row !=col){
        flag=0;
    }
    //00 11 22 tah value diagonal
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            if(i == j){
                if(a[i][j] != a[0][0]){
                    flag = 0;
                }   

            }
            //checking diagonal chara 
            //kono value zero nai naki
            else if(a[i][j] != 0){
                flag = 0;
            }
        }
    }


    if(flag == 1){
        printf("Scalar matrix\n");
    }
    else{
        printf("Not scalar\n");
    }
    return 0;
}