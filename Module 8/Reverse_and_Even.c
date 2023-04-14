#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n;i++){
        //input nicci values in aray
        scanf("%d",&ar[i]);
    }


    //reversing and checking the evens
    for(int i=n-1; i>=0; i--){
        //jodi even hoi print hobe ar naile hobena
        if(i%2==0){
            printf("%d ",ar[i]);
        }
    }

    return 0;
}