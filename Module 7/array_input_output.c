#include<stdio.h>

int main(){
    int ar[5]; 
    
    //Taking input
    for(int i=0; i<5 ; i++){
        scanf("%d",&ar[i]);
    }

    //Printing output
    for(int i=0; i<5 ; i++){
        printf("%d\n",ar[i]);
    }

    return 0;
}