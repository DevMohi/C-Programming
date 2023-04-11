//Reverse array
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    // n-1 because 0-4 not 5 
    for(int i=n-1; i>=0; i--){
        printf("%d ",ar[i]);
    }

    return 0;
}