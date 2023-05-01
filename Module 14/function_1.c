// return + parameter 

// Function Syntax
// return type name(){
//     code 
//     return what
// }

//reuse kora jai
//repeatation komai

// int sum(int x,int y){
//     //code
//     int sum = x+y;
//     return sum;
// }

//Upore declare kore niche use korte parba
int sum(int x,int y);

#include<stdio.h>

int main(){
    int ans = sum(10,30);
    printf("%d",ans);
    return 0;
}

int sum(int x,int y){
    //code
    int sum = x+y;
    return sum;
}
