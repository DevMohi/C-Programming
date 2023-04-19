// a = "orange"
// b = "apple"
 
// o r a n g e \0 - > 0 1 2 3 4 5 6 

// a[i] = b[i]   korle a tah copy hoie jabe

#include<stdio.h>
#include<string.h>

//ai code ta banacci jeno a , b theke copy kore
int main(){
    char a[100], b[100];
    scanf("%s %s",&a,&b);

    //Aita Without built-in function
    // <= jacci coz null tao copy korte hobe 
    // for(int i=0 ; i<=strlen(b); i++){
    //     // printf("%d",i); 
    //     //To copy the codes into a[i]
    //     a[i] = b[i];
    // }


    //to do this with function
    //The strcpy here copies the characters from b to a 
    strcpy(a,b);
    printf("%s %s",a,b); 

    return 0;
}