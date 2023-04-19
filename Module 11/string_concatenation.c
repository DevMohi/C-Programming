#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);

    //with logic
    // for(int i=0, k=strlen(a); i<=strlen(b); i++){
    //     a[k] = b[i];
    //     k++;
    // }

    // custom concat 
    int k = strlen(a);
    for(int i=0; i<=2; i++){
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';

    // With function a er ste b ta add hoie jai
    // strcat(a,b);

    printf("%s %s",a,b);
    return 0;
}