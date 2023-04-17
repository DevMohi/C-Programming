#include<stdio.h>
#include<string.h>

//space die input nite hoile
//either gets or fgets
//windows extra memory die but linux othoba compiler 
//gula error dibe


int main(){
    
    char a[18];
    //With gets
    // gets(a);

    //With fgets 
    // since fgets enter nei tai 18 th position NULL
    // koro 
    fgets(a,18,stdin);
    a[17] = '\0';
    printf("%s",a);
    return 0;
}