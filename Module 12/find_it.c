#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int x;
    int count = 0; 
    scanf("%d",&x);

    for(int i=0; i<n; i++){
        if(ar[i] == x){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}