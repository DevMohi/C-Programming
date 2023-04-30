// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space=n-1, k=1;

//     for(int i=1; i<=n; i++){
//         // For space 
//         for(int j=1; j<=space;j++){
//             printf(" ");
//         }
//         // for k 
//         for(int j=1; j<=k; j++){
//             printf("*");
//         }
//         //kaj sesh howar por
//         space--;
//         k=k+2;

//         printf("\n");
//     }
//     return 0;
// }



// Pattern 2 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int space =0, star = (2*n)-1;

    for(int i=1; i<=n; i++){
        //reverse pyramid er kaj
        // first star  


        for(int j = 1; j<=space; j++){
            printf(" ");
        }
        for(int j = star; j>=1; j--){
            printf("*");
        }

        space++;
        star = star-2;

        printf("\n");
    }


    return 0;
}