#include<stdio.h>

int main(){
    int m1,m2,d;

    scanf("%d %d %d",&m1,&m2,&d);


    //counting the m1 workers completion time
    int workers = m1*d;

    //getting the final value by dividing the time
    int value = workers/m2;

    printf("%d",value);

    return 0;
}