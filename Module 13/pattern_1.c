// #include<stdio.h>

// int main(){
//     int n,k;
//     scanf("%d",&n);
//     for(int i=1; i<=n;i++){
//         //Kaj
//         for(int j=1; j<=k; j++){
//             printf("*");
//         }
//         //protita kaaj sesh howar por k++ hobe
//         k++;

//         //protibar new line hobe kaaj sesh howar por
//         printf("\n");
//     }   
//     return 0;
// }


//Pattern 2

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int k=n;

    //1 theke 4 bar print hobe
    for(int i=1; i<=n; i++){
        for(int j=k ; j>=1 ; j--){
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}