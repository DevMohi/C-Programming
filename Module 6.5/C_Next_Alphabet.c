//alphabets number 97 to 122
//Problem 1
#include<stdio.h>

int main(){
    char n;
    scanf(" %c",&n);

    if(n>='a' && n<='z'){
        if(n==122){
            printf("%c",n-25);
        }
        else{
            printf("%c",n+1);
        }
    }

    return 0;
}