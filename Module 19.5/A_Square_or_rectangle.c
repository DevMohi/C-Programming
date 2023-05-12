#include<stdio.h>

int main(){
    //square hobe jkn duita value same
    int test;
    scanf("%d",&test);

    for(int i=0; i<test;i++){
        int w,h;
        scanf("%d %d",&w,&h);

        if(w == h){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }


    return 0;
}