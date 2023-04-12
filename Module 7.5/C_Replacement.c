//Replacement
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);

        if(ar[i] == 0){
            ar[i] = 0;
        }
        else if(ar[i] < 0) {
            ar[i] = 2;
        }
        else{
            ar[i] = 1;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}