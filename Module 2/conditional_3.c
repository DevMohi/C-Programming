#include<stdio.h>

int main(){
    int tk;
    scanf("%d",&tk);

    //Nested if-else
    if(tk >=5000){
        printf("Cox's Bazar Jabo\n");
        if(tk>=10000){
            printf("saint martin jabo\n");
        }
        else{
            printf("Ferot chole jabo\n");
        }
    }
    else{
        printf("Kothao Jabo Na\n");
    }
}