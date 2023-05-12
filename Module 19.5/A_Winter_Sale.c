//use float for this problem
//price before discount

#include<stdio.h>

int main(){
    float x, p;
    scanf("%f %f",&x,&p);

    float discount = (100 - x) /100;
    float ans = p/discount;

    printf("%.2f",ans);

    return 0;
}