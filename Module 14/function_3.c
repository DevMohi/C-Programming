// No return + parameter 

//Parameter recieve korbe kintu value nai
//void likte hobe since return nai
//Break shudu loop e kaaj kore function e na
//return shob jaigai use kora jai.

#include<stdio.h>

void sum(int x,int y){
    int s = x+y;
    //since value return korte parbona
    //aikane print kore dibo
    printf("%d\n",s);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}