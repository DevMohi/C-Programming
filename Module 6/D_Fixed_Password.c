#include<stdio.h>

int main(){
    int guess;
    while(scanf("%d",&guess) != EOF){
        if(guess == 1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }


    return 0;
}

//Wrong 
//Correct