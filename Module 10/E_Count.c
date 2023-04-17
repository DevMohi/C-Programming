#include<stdio.h>
#include<string.h>

int main(){
    char a[1000001];
    scanf("%s",&a);
    int sum=0;

    //first way
    //The for loop can be also written as
    for(int i=0; i<strlen(a); i++){
        //minus korsi coz ascii theke value ta minus
        //korle digit dei
        // sum = sum + (a[i] - 48);
        // or 
        sum = sum + (a[i] - '0'); 
    }

    printf("%d",sum);

    //Second way
    // for(int i=0; a[i] != '\0'; i++){
    //     //minus korsi coz ascii theke value ta minus
    //     //korle digit dei
    //     // sum = sum + (a[i] - 48);
    //     // or 
    //     sum = sum + (a[i] - '0'); 
    // }

    // printf("%d",sum);

    return 0;
}