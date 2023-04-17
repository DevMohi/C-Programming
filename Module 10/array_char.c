#include<stdio.h>

int main(){
    // char a[5];
    // for(int i=0 ; i<5; i++){
    //     scanf("%c",&a[i]);
    // }
    // for(int i=0 ; i<5; i++){
    //     printf("%c\n",a[i]);
    // }


    // size of array 
    char a[5];
    int size = sizeof(a)/sizeof(char);
    printf("%d",size);

    return 0;
}