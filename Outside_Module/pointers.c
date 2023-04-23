#include<stdio.h>

int main(){
    int a=10;
    printf("Address -> %p value ->%d\n",&a,a);

    //%p die address dekai
    // pointer e a er address store kortese 
    int *p = &a;
    printf("Address -> %p , Value -> %p\n",&p,p);

    printf("value of that address -> %d\n",*p);
    return 0;
}


//pointer address rakhe

// int *p 
//here star represents pointer 
