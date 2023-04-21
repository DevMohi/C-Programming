//Function Declaration

// return type name(param){
//     instructions 
// }


//2 bhave value dewa jai
//ekta parameter ar arekta input die in function


//2 bhave output dewa jai
//return kora
//ar naile function e output dibe

//C programming e function ta main er upor declare korte 
// hoi


//Function die code repeat korte hoina

#include<stdio.h>
//declaring new function
int make_sum (int a,int b){
    int sum = a+b;
    //return korte hobe
    return sum;
}

int main(){
    int s = make_sum(10,15);
    printf("%d",s);
    return 0;
}