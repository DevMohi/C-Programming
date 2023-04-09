// Problem I - Welcome for you with Conditos
// #include<stdio.h>

// int main(){
    
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a>=b){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
//     return 0;
// }

// Problem J - Multiples 
// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a%b==0){
//         printf("Multiples");
//     }
//     else if(b%a==0){
//         printf("Multiples");
//     }
//     else{
//         printf("No Multiples");
//     }
//     return 0;
// }


//Problem 3 - Char

// #include<stdio.h>

// int main(){
//     char x;
//     scanf(" %c",&x);


//     if(x >='a' && x<='z'){
//         int ans = x-32;
//         printf("%c",ans); // small to big
//     }
//     else{
//         printf("%c",x+32); // big to small  
//     }

//     return 0;
// }


//Problem P 

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int sum = n/1000;

//     if(sum%2==0){
//         printf("EVEN");
//     }
//     else{
//         printf("ODD");
//     }
// }

//Problem - m Capital or small or digit

// #include<stdio.h>

// int main(){
//     char x;
//     scanf(" %c",&x);


//     if(x>=48 && x<=57 ){
//         printf("IS DIGIT\n");
//     }
    
//     else{
//         printf("ALPHA\n");
//         if(x >='a' && x<='z'){
//             printf("IS SMALL\n");
            
//         }
//         else{
//             printf("IS CAPITAL\n");
//         }
//     } 

//     return 0;
// }


//Problem 6 - Max and Min

#include<stdio.h>

int main(){
    int a,b,c;
    int max,min;

    scanf("%d %d %d",&a,&b,&c);

    // For max 
    //condition correct
    if(a>=b && a>=c){
        max=a;
        if(b>=c){
            min = c;
        }
        else{
            min = b;
        }
    }
    //condition correct
    else if(b>=a && b>=c){
        max=b;
        if(a>=c){
            min = c;
        }
        else{
            min = a;
        }
    }
    else{
        max =c; 
        if(a>=b){
            min = b;
        }
        else{
            min = a;
        }
    }

    printf("%d %d",min,max);

}