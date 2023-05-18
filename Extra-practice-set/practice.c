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

//D -> range sum = Accepted
//for l=3 and r = 6;
//sum 1 finds 1 to 3 sum = 6 (1+2+3)
//sum 2 finds 6  1 to 6 sum = 21 (1+2+3+4+5+6)
//Here we can see we dont need from both of them
// so 21-8 

// #include<stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);

//     for(int i=0; i<t;i++){
//         long long int l,r;
//         scanf("%lld %lld",&l,&r);

//     //finding 1 to l sum;

//         long long int sum1 = (l) * (l+1)/2;
//         long long int sum2 = (r) * (r+1)/2;

//         long long int sum=0;
//         if(l<r){
//             sum = sum2 - sum1 + l;
//         }
//         else if(l>=r){
//             sum = sum1 - sum2 + r;
//         }

//         printf("%lld\n",sum);
//     }
//     return 0;
// }


// D -> Counting elements  = Accepted
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
//             if(ar[j] == ar[i] +1){
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("%d",count);  

//     return 0;
// }



//F -> Break Number = Accepted


// #include<stdio.h>

// int main(){
//     long long int test;
//     scanf("%lld",&test);
   
//     long long int x;
//     long long int count = 0;
//     long long int countNew = 0;

//     for(int i=0;i<test; i++){
//         count = 0;
//         scanf("%lld",&x);
//         while(x%2 ==0 ){
//             x = x/2;
//             count++;
//         }
//         if(count > countNew){
//             countNew = count;
//         }
//     }
//     printf("%lld",countNew);

//     return 0;
// }

//Reversing

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ar[n];

//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }
//     for(int i=0; i<=n/2;i++){
//         int temp = ar[0];
//         ar[0]= ar[n/2]; 
//         ar[n/2] =temp;

//         printf("%d ",ar[i]);

//     }
//     return 0;
// }


