#include<stdio.h>

int main(){
    int i;
    for(i=1; i<=5; i=i+1){
        printf("Hello\n");
    }
}


/*
    //Note - Initialization part is run once.
    First Initialization hobe, checks i=1 is less than 3
    if its true it prints hello
    Then it goes on to increament it to 2,
    then check if condition is true, if true prints hello and increaments to 3


    The value finally goes to 4 and stops the loop
*/