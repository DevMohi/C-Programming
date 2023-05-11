
//Missing Number = NS
#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    
    for(int i=0; i<test; i++){
        long long int s,a,b,c;
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        
        long long int lost_number = s-(a+b+c);
        if(lost_number <= 0){
            printf("0\n");
        }
        else{
            printf("%lld\n",lost_number);
        }
    }
    return 0;
}



//Problem 2 - Unit matrix = Accepted

// #include<stdio.h>
// //primary diagonals ar 1 and the non diagonals are 0 

// int main(){
//     int n;
//     scanf("%d",&n);

//     //creating 2D array
//     int ar[n][n];

//     for(int i=0; i<n;i++){
//         for(int j=0; j<n;j++){
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     //unit matrix 
//     int flag = 1;
//     for(int i=0; i<n;i++){
//         for(int j=0; j<n;j++){
//             //checking primary ones
//             if(i == j){
//                 if(ar[i][j] != 1){
//                     flag=0;
//                 }
//             }

//             else if(ar[i][j] != 0){
//                 flag = 0;
//             }

//         }
//     }

//     if(flag == 1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }


//Problem 3 = Matrix again = Accepted

// #include<stdio.h>

// int main(){
//     int row,col;
//     scanf("%d %d",&row,&col);

//     int ar[row][col];

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             scanf("%d",&ar[i][j]);
//         }
//     }


//     //printing column
//     int e = row -1; // 2
//     for(int i=0; i<col; i++){
//         printf("%d ",ar[e][i]);
//     } 

//     printf("\n");

//     int j = col-1; 
//     for(int i=0; i<row; i++){
//         printf("%d ",ar[i][j]);
//     }


//     return 0;
// }


//Problem 4 = count it = accepted

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s[1001];
//     fgets(s,1001,stdin);

//     //for space;
//     int count = 0;
//     //for capital 
//     int count1 = 0;
//     //for small 
//     int count2 = 0;
//     for(int i=0; i<strlen(s); i++){
//         if(s[i] == ' '){
//             count++;
//         }
//         else if(s[i] >= 'A' && s[i] <= 'Z'){
//             count1++;
//         }
//         else if(s[i] >= 'a' && s[i] <= 'z'){
//             count2++;
//         }
//     }


//     printf("Capital - %d\n",count1);
//     printf("Small - %d\n",count2);
//     printf("Spaces - %d\n",count);
//     return 0;
// }


//Problem 5 - Patterns Again
//Accepted

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int k = 1;

//     int space2 = n-2;
//     int e = 3;

//     for(int i=1; i<=n; i++){
//         //Kaj

//         if(i%2 != 0){
//             for(int j=1; j<=space; j++){
//                 printf(" ");
//             }
//             for(int j=1; j<=k; j++){
//                 printf("^");
//             }
//             space = space -2;
//             k = k+4;
//         }

//         else if(i%2 == 0){
//             for(int j=1; j<=space2; j++){
//                 printf(" ");
//             }
//             for(int j=1; j<=e; j++){
//                 printf("*");
//             }
//             space2 = space2 - 2;
//             e = e+4;
//         }

//         printf("\n");
//     }
//     return 0;
// }



//Problem 6
//Accepted
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int tiger,pathan;

//     int countTiger = 0;
//     int countPathan = 0;


//     for(int i=0; i<n; i++){
//         scanf("%d %d",&tiger,&pathan);

//         if(tiger > pathan){
//         countTiger++;
//         }
//         else if(pathan> tiger){
//             countPathan++;
//         }
//     }

//     if(countTiger > countPathan){
//         printf("Tiger");
//     }
//     else if(countPathan > countTiger){
//         printf("Pathan");
//     }
//     else{
//         printf("Draw");
//     }

//     return 0;
// }



//Middle man

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int ar[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }

//     //sorting
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             int temp = ar[i];
//             if(ar[i]> ar[j]){
//                 ar[i] = ar[j];
//                 ar[j] = temp;
//             }
//         }
//     }

//     int even = n/2; //3
//     int even2 = (n/2) + 1; //4
//     int odd = (n+1)/2;

//     if(n%2 == 0){
//         printf("%d %d",ar[even-1],ar[even2-1]);
//     }
//     else{
//         printf("%d",ar[odd-1]);
//     }

//     return 0;
// }