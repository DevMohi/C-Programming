#include<stdio.h>
#include<string.h>

//counting length

int main(){
    char a[100];


    // scanf die nile mane space newa jabena 
    scanf("%s",&a);
    int count =0; 

    // a[0] = 'p' gives the value and not index

    //1st way 
    //for loop die length ber kora 
    // for(int i=0; a[i] != '\0'; i++){
    //     count++;
    // }

    //2nd way
    //While loop die length ber kora 
    // int i=0;
    // while(a[i] != '\0'){
    //     count++;
    //     i++;
    // }
    // printf("%d",count); 

    // 3rd way with built-in function 
    int st = strlen(a);
    printf("%d",st);  
    
    return 0;
}