//What is pointer

//It is an variable jeita ddress nie kaaj kore
//Address rakte chaile karo pointer lagbe
//Syntax =  data type *p  = &x
// To print address use  %p
// & represent address
//de reference  = reference theke value newa ashe

#include<stdio.h>

int main(){
    int x = 10;

    // printf("%p\n",&x); 

    int *p = &x;
    printf("%p\n",p);

    //de reference  = reference theke value newa ashe
    printf("%d\n",*p);

    // To change with pointer 
    *p = 500;

    printf("%d\n",*p);

    return 0;
}