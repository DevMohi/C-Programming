#include<stdio.h>

int main(){
    //array hocce pointer
    int a[5] = {10,20,30,40,50};
    // printf("%p %p\n", a, &a[0]); 

    //pointer value rakhe a[0]
    // printf("%d %d %d",*a,*(a+1),*(a+2)); 

    int *ptr = a;

    for(int i=0; i<5;i++){
        printf("%d ",*(ptr));
        ptr++;
    }
    return 0;
}

//Constant pointers