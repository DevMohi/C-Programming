#include<stdio.h>

int main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
}