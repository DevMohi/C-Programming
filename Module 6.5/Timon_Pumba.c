//Problem 4- Timon and Pumbaa
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int diff = a-b;

    if(diff>=0){
        printf("%d",diff);
    }
    else{
        printf("0");
    }

    return 0;
}