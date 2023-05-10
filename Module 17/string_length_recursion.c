#include<stdio.h>

int fun(char a[], int i){
    //ar aikane return korsi value coz aita add up hobe
    if(a[i] == '\0') return 0;
    //fun 4 ta value dicci for hello , except for h
    int len = fun(a,i+1);
    //tai return kortesi 1+len , since h count hoinai
    return len+1;
}

int main(){
    char a[] = "hello";
    int len = fun(a,0);
    printf("%d",len);
    return 0;
}