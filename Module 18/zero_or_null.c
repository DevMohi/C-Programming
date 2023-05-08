//er shob elements 0 hobe
///zero or null matrix
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
    int cnt = 0;
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            if(a[i][j] == 0){
                cnt++;
            }
        }
    }
    int value = row*col;

    printf("%d\n",cnt);

    if(cnt == value){
        printf("Null or zero matrix");
    }
    else{
        printf("Not Zero matrix");
    }
    return 0;
}