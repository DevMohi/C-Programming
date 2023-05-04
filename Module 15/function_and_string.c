#include<stdio.h>
#include<string.h>

//String er jnno lagena size pass kora in function
//return kora jabena as array

void fun(char ar[]){
    //size of string 
    // int sz = sizeof(ar)/sizeof(char);
    // printf("%d",sz);
    printf("%d",strlen(ar));
}

int main(){
    char ar[6] = "Hello";
    fun(ar);
    return 0;
}