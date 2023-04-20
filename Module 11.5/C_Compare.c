//Logical way
// #include<stdio.h>

// int main(){

//     char a[100] ,b[100];
//     scanf("%s %s",&a,&b);
//     //baire init korte hoi for while loop
//     int i=0;
//     while(1){
//         if(a[i] == '\0' && b[i] == '\0'){
//             printf("%s\n",a);
//             break;
//         }

//         else if(a[i] == '\0'){
//             printf("%s\n",a);
//             break;
//         }
//         else if(b[i] == '\0'){
//             printf("%s\n",b);
//             break;
//         }

//         if(a[i] == b[i]){
//             i++;
//         }
//         else if(a[i] < b[i]){
//             printf("%s\n",a);
//             break;
//         }
//         else{
//             printf("%s\n",b);
//             break;
//         }
//     }
//     return 0;
// }


// Second way 

#include<stdio.h>
#include<string.h>
int main(){
    char a[100] ,b[100];
    scanf("%s %s",&a,&b);
    int v = strcmp(a,b);

    if(v<0){
        printf("%s",a);
    }
    else if(v>0){
        printf("%s",b);
    }
    else{
        printf("%s",a);
    }
    return 0;
}