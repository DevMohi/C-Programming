// E-> Interval sweeps = Accepted

// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a ==0 &&b ==0){
//         printf("NO");
//         return 0;
//     }
//     if(a-b == 1 || a-b ==0  ){
//         printf("YES");
//     }
//     else if(b-a == 1 || b-a ==0  ){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }


//B -> Drawing x = Accepted

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int ar[n][n];

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){

//             //jodi n odd hoi
//             if(n%2!=0){
//                 if(i == n/2 && j== n/2){
//                     printf("X");
//                 }
//             }

//             if(i==j){
//                 if(i == n/2 && j== n/2){
//                     continue;
//                 }
//                 else{
//                     printf("\\");
//                 }
                
//             }
//             else if(i+j==n-1){
//                 if(i == n/2 && j== n/2){
//                     continue;
//                 }
//                 else{
//                     printf("/");
//                 }
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
        
//     }

//     return 0;
// }


// C -> finding minimums

// #include<stdio.h>
// #include<limits.h>

// int main(){
//     int n,k;
//     int min = INT_MAX;

//     scanf("%d %d",&n,&k);

//     int ar[n];
 
//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }

//     int z = k;
//     int saved[101] = {0};  
//     int j;
//     for(int i=0; i<n; i++){
//         int min = INT_MAX;
//         if(z==n) break;
//         for(j=0; j<z;j++){
//             if(ar[j]<min){
//                 min = ar[j];
//             }
//         }
//         saved[i] = min;
//         //Kaj sesh
//         if(z+k < i){
//             z = z+k;
//             j= j+k;
//         }
//         else{
//             z = z+1;
//             j=j+1;
//         }
//     }

//     // for(int i=0; i<n; i++){
//     //     printf("%d ",saved[i]);
//     // }
//     printf("%d %d\n",z,j);
   
 

//     return 0;
// }

//D -> range sum

// #include<stdio.h>

// int main(){
//     long long int t;
//     scanf("%lld",&t);
//     long long int l,r;

//     for(int j=0; j<t; j++){
//         scanf("%lld %lld",&l,&r);
//         long long int sum = 0;
//         for(int i=l; i<=r; i++){
//             sum = sum+ i;
//         }
//         printf("%lld\n",sum);
//     }

//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int ar[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&ar[i]);
//     }

//     int count = 0;

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0 ; j<n; j++){
//             if(ar[j] + 1 == ar[i]){
//                 count++;
//             }
//         }
//         // printf("\n"); 
//     }
//     printf("%d",count);

//     return 0;
// }



//F -> front-end


#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    for(int i=0; i<5; i++){
        
    }

    return 0;
}