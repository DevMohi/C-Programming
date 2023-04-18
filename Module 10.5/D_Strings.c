#include<stdio.h>
#include<string.h>

int main(){
    char a[11], b[11];

    scanf("%s %s",&a,&b);


    //for length
    int sza = strlen(a);
    int szb = strlen(b);

    
    //for reversing
    char ab[22];

    //a theke copy korsi a ke change korinai
    strcpy(ab,a);

    //concat korsi
    strcat(ab,b);

    printf("%d %d\n",sza,szb);

    printf("%s\n",ab);


    //for swapping
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s",a,b);

   
    return 0;
}