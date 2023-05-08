//A

// #include<stdio.h>

// void fun(int i, int n){
//     if(i == n+1) return;
//     printf("I love Recursion\n");
//     fun(i+1, n);
// }

// int main(){
//     int n;
//     scanf("%d",&n);

//     fun(1,n);
//     return 0;
// }

//B

// #include<stdio.h>

// void fun(int i, int n){
//     if(i==n+1) return;
//     printf("%d\n",i);
//     fun(i+1,n);
// }

// int main(){
//     int n;
//     scanf("%d",&n);

//     fun(1,n);
//     return 0;
// }


//C

#include<stdio.h>

// void fun(int i, int n){
//     if(i==0) return;
//     printf("%d",i);
//     if(i != 1) printf(" "); // add space after number except for the last number
//     fun(i-1, n);
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     fun(n, n);
//     return 0;
// }

// D = print even indices 

#include <stdio.h>
 
void print_even_reverse(int arr[], int n, int i) {
    if (i >= n) {
        return;
    }
    print_even_reverse(arr, n, i+1);
    if (i % 2 == 0) {
        printf("%d ", arr[i]);
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    print_even_reverse(arr, n, 0);
    return 0;
}


//L = summation


// #include<stdio.h>

// long long int fun(long long int ar[], int n, int i){
//     if(i == n) return 0;
//     long long int sum = fun(ar, n, i+1);
//     return ar[i] + sum;
// }

// int main(){
//     int n;
//     scanf("%lld", &n);

//     long long int ar[n];

//     for(int i=0; i<n; i++){
//         scanf("%lld", &ar[i]);
//     }

//     long long int ans = fun(ar, n, 0);
//     printf("%lld", ans);

//     return 0;
// }

//Matrix

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int a[n][n];

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int primary_sum = 0;
//     int secondary_sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             //for primary diagonal
//             if(i+j == n-1){
//                 secondary_sum = secondary_sum+ a[i][j];
//             }
//             if(i==j){
//                 primary_sum = primary_sum+a[i][j];
//             }
//         }
//     }


//     int final_sum = primary_sum - secondary_sum;

//     if(final_sum < 0){
//         final_sum = final_sum * -1;
//         printf("%d" ,final_sum);

//     }
//     else{
//         printf("%d" ,final_sum);
//     }
    

//     return 0;
// }


//Search in matrix

// #include<stdio.h>

// int main(){
//     int row, col;
//     scanf("%d %d",&row,&col);

//     int a[row][col];


//     //Taking input in 2D array
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }

//     //Taking x
//     int x;
//     scanf("%d",&x);

//     int flag = 0;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(a[i][j] ==x ){
//                 flag= 1;
//                 break;
//             }
//         }

//     }

//     if(flag == 1){
//         printf("will not take number");
//     }
//     else{
//         printf("will take number");
//     }

//      return 0;
// }