#include<stdio.h>

int main(){
    int row, col;
    scanf("%d %d",&row,&col);

    int a[row][col];


    //Taking input in 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }

    //Exact row
    // int e=2;
    // for(int i=0; i<col ; i++){
    //     printf("%d ",a[e][i]);
    // }
    
    // Now for exact column 

    int j = 1;
    for(int i =0 ; i<row; i++){
        printf("%d ",a[i][j]);
    }


    return 0;
}