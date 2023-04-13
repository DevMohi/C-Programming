#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    //checking if less than 0 or equal to 0 hoi naki

    if(n<0 || n==0){
        for(int i=n; i<=1;i++){
            printf("%d ",i);
        }
    }

    else{
        for(int i=1; i<=n;i++){
            printf("%d ",i);
        }
    }
    return 0;
}

    // for(int i=n-1; i>=0; i--){
    //     printf("%d ",ar[i]);
    // }
