#include<stdio.h>

void array_printing(int *ar, int size, int index){
    //base case
    if(index == size) return;
    printf("%d\n", ar[index]);
    array_printing(ar,size,index+1);
}

int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size;i++){
        scanf("%d",&a[i]);
    }
    array_printing(a,size,0);
    return 0;
}