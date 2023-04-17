#include<stdio.h>

int main(){
    char s[1001], t[1001];

    scanf("%s",&s);
    scanf("%s",&t); 

    //For getting length
    int count = 0;
    int count2 = 0;

    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    for(int i=0; t[i] != '\0'; i++){
        count2++;
    }

    printf("%d %d\n",count,count2); 


    // For printing  
    printf("%s ",s);
    printf("%s",t);

    return 0;
}