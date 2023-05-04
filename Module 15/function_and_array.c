#include<stdio.h>


//size nite hobe coz size wrong dei inside function
//coz pointer er first value nei
//two ways
// void fun (int ar[], int n)
// {
//     for(int i=0 ; i<n; i++){
//         printf("%d ",ar[i]);   
//     }
// }

void fun (int *ar, int n)
{
    for(int i=0 ; i<n; i++){
        printf("%d ",ar[i]);   
    }
}

int main(){
    int ar[5] = {10,30,40,50,60};
    
    fun(ar,5);
    //sending array address
    //ar -> ar[0]
    return 0;
}