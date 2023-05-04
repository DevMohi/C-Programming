#include<stdio.h>

int main(){
    int ar[5] = {10,30,40,50,60};
    //ar = address 
    // printf("0 the index er address - %p\n",&ar[0]);
    // printf("1 the index er address - %p\n",ar);


    printf("0th index er value- %d\n",ar[0]);
    printf("0th index er value- %d\n",*ar);

    //To get the next index value
       printf("1th index er value- %d\n",ar[1]);
    printf("1th index er value- %d\n",*(ar+1));

    //Another way - Interesting check the above one
    printf("1th index er value- %d\n",1[ar]);
    printf("1th index er value- %d\n",*(1+ar));


    return 0;
}