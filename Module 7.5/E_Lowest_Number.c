#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int mn = INT_MAX;
    int pos; 

    for(int i=0; i<n; i++){
        if(ar[i] < mn){
            mn = ar[i];
            //index theke ek beshi
            pos = i + 1;
        }
    }

    printf("%d %d\n",mn,pos);
    return 0;
}


//Normally
//index 0 1 2
//pos   1 2 3