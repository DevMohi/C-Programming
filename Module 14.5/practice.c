// Problem 1 
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int k=n;

//     for(int i=1; i<=n;i++){
//         for(int j=k; j>=1; j--){
//             printf("*");
//         }
//         k--;
//         printf("\n");
//     }
//     return 0;
// }


// Problem 2 
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int star = 1;

//     for(int i=1; i<=n;i++){
//         //For space
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star; j++){
//             printf("*");
//         }
//         space--;
//         star= star+2;
//         printf("\n");
//     }
//     return 0;
// }


//Problem 3

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int star = 1;

//     for(int i=1; i<=n;i++){
//         //For space
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star; j++){
//             printf("*");
//         }
//         space--;
//         star=star+2;  
//         printf("\n");
//     }


//     // Loop reverse 
//     int space2 =0, star2 = (2*n)-1;

//     for(int i=1; i<=n; i++){
//         //reverse pyramid er kaj
//         // first star  


//         for(int j = 1; j<=space2; j++){
//             printf(" ");
//         }
//         for(int j = star2; j>=1; j--){
//             printf("*");
//         }

//         space2++;
//         star2 = star2-2;

//         printf("\n");
//     }


//     //Loop 2 
//     return 0;
// }


//Problem 4

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int a[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }


//     for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n;j++){
            
//             if(a[i]>a[j]){
//                 int tmp = a[i];
//                 a[i] = a[j];
//                 a[j] = tmp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }



//codeforces problem above


//Normal Problems
//Problem 1 - done
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int k = 1;

//     for(int i=1; i<=n; i++){
//         // for space 
//         for(int j=1; j<=space;j++){
//             printf(" ");
//         }     
//         //for stars
//         for(int j=1; j<=k; j++){
//             printf("*");
//         }   
//         space--;
//         k++;
//         printf("\n");
//     }

//     return 0;
// }


//Problem 2


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int space = 0;
//     int k =(2*n)-1;

//     for(int i=1; i<=n;i++){
//         // for space 
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         //for stars
//         for(int j=k; j>=1 ; j--){
//             printf("*");
//         }
//         space++;
//         k=k-2;
//         printf("\n");
//     }
//     return 0;
// }



//Problem 3

#include<stdio.h>

//functions
int char_to_ascii(char x){
    int z = x;
    return z;
}

int main(){
    char x;
    scanf("%c",&x);

    int ans = char_to_ascii(x);
    printf("%d",ans);
    return 0;
}


// //Problem 4

// #include<stdio.h>

// char small_to_capital (char x){
//     char capital;
//     capital = x-32;
//     return capital;
// }


// int main(){
//     char small,capital;
//     printf("Enter a small alphabet: ");
//     scanf("%c",&small);

//     capital = small_to_capital(small);
//     printf("The capital alphabet is: %c\n",capital);

//     return 0;
// }


//Problem 5

// #include<stdio.h>

// char capital_to_small (char x){
//     char small;
//     small = x+32;
//     return small;
// }


// int main(){
//     char large,small;
//     printf("Enter a large alphabet: ");
//     scanf("%c",&large);

//     small = capital_to_small(large);
//     printf("The small alphabet is: %c\n",small);

//     return 0;
// }