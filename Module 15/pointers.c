#include<stdio.h>

int main(){
    int x = 100;
    int *ptr = &x;

    //x = 200 likha ar *ptr dereference kora same
    // x = 200; 
    // *ptr = 200;
    // or 


    //aikane ptr er value hocce ekta address
    int *ptr2 = ptr;
    *ptr2 = 500;


    //Seeing the addresses 
    // printf("x er address: %p\n",&x);
    // printf("ptr er value: %p\n",ptr);
    // printf("ptr er address: %p\n",&ptr);

    // Pointer address rakhe ar dereference korte pare 
    //dereference kore dhore ante pare plus value change korte pare

    printf("x er value -> %d\n",x);
    printf("ptr er value -> %d\n",*ptr);
    printf("ptr2 er value -> %d\n",*ptr2);


    printf("ptr er value -> %p\n",ptr);
    printf("ptr2 er value -> %p\n",ptr2);


    //Int size
    // printf("ptr er memory size: %d\n",sizeof(ptr));

    return 0;
}