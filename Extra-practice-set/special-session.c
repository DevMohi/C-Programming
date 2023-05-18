// Special session 

// Interval sweep 
// total case 
// 1. a==0 &&b ==0 --> no 
// 2. a==b -> yes 
// abs(a-b) == 1 yes
// else  -> no 

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a==0 && b==0){
//         printf("NO");
//     }
//     else if(a==b){
//         printf("YES");
//     }
//     else if(abs(a-b) == 1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }

//     return 0;
// }



// session solve  = Drawing X
//Primary, diagonal and middle value.

// #include<stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         for(int j=1; j<=a; j++){
//             // middle 
//             if(i == (a+1)/2 && j == (a+1)/2){
//                 printf("X");
//             }
//             //Primary diagonal 
//             else if(i==j){
//                 printf("\\");
//             }
//             //secondary diagonal
//             // a+1 hobe jodi 1 die shuru hoi 
//             else if(i+j == a+1){
//                 printf("/");
//             }
//             else{
//                 printf("*");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }


//Finding minimum

//total kaj
// 1) ekta robot  --> shuru theke sesh porjonto jabe 
// 2) second robot --> ow kujbe kothai group complete hoise
// 3) Jodi oshoman bag hoi tokon arekta kaaj 

// #include<stdio.h>
// #include<limits.h> 

// int main(){
//     int n,k;
//     scanf("%d %d",&n,&k);

//     int ar[n];
 
//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }


//     int j = k-1; //first group hobe k-1 index
//     int min = INT_MAX;
//     for(int i=0; i<n;i++){ //first robot
//         if(ar[i] < min){
//             min = ar[i];
//         }

//         if(i == j || i == n-1){//group checking
//             printf("%d ",min);
//             j = j+k;
//             //once a group is finished every time korbar jnno abar min set korsi
//             min = INT_MAX;
//         }
//     }

//     // if(n%k !=0){
//     //     printf("%d ",min);
//     // }

//     return 0;
// }


// Reversing 

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ar[n];

//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }
//     for(int i=0; i<n;i++){

//         if(ar[i] == 0){
//             //j hocce shuru theke reverse korar jnne
//             // k hocce 0 er ag obdi reverse korar jnno
//             //sorting er code likbo
//             int j = 0, k = i-1;

//             // swapping code 
//             while(j<k){
//                 int temp = ar[j];
//                 ar[j] = ar[k];
//                 ar[k] = temp;
//                 j++;
//                 k--;
//             }
//         }
//     }

//     for(int i=0; i<n;i++){
//         printf("%d ",ar[i]);
//     }
// }



//G- Even hate odd = accepted

// #include<stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);


//     for(int i=0; i<t; i++){
//         int n;
//         scanf("%d",&n);
//         int ar[n];

//         for(int i=0; i<n;i++){
//             scanf("%d",&ar[i]);
//         }

//         //odd even check

//         int oddCount = 0;
//         int evenCount = 0;
//         for(int i=0; i<n;i++){

//             if(ar[i] % 2 == 0){
//                 evenCount++;
//             }
//             else{
//                 oddCount++;
//             }
//         }

//         if(n%2!=0){
//             printf("-1\n");
//         }
//         else if(oddCount == evenCount){
//             printf("0\n");
//         }
//         else{
//             if(oddCount>evenCount){
//                 int value = oddCount - (n/2);
//                 printf("%d\n",value);
//             }
//             else{
//                 int value = evenCount - (n/2);
//                 printf("%d\n",value);
//             }
//         }
//     }
//     return 0;
// }


// F- front end   = accepted
// #include <stdio.h>

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0, j = a - 1; i <= j; i++, j--)
//     {
//         if (i == j)
//         {
//             printf("%d ", arr[i]);
//         }
//         else
//         {
//             printf("%d %d ", arr[i], arr[j]);
//         }
//     }

//     return 0;
// }



// Sort string 
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    char c;
    int cnt[26] = {0};
    for(int i=0; i<a; i++){
        scanf(" %c",&c); // Add a space before %c to consume the newline character
        cnt[c-'a']++;
    }
    for(int i=0; i<26; i++){
        while(cnt[i] != 0){
            printf("%c",i+'a');
            cnt[i]--;
        }
    }

    return 0;
}