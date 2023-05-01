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

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }


    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}