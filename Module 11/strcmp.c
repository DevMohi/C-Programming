#include<stdio.h>
#include<string.h>

//easier way to compare lexographical things
int main(){
    char a[100], b[100];
    scanf("%s %s",&a,&b);
    //aita ekta value return kore so store korte 
    //hobe
    int val = strcmp(a,b);


    if(val < 0){
        printf("A smaller");
    }
    else if(val > 0){
        printf("B smaller");
    }
    else{
        printf("Same");
    }

    return 0;
}