//Mirror array
// #include<stdio.h>

// int main(){
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int ar[row][col];


//     for(int i=0; i<row; i++){
//         for(int j=0; j<col ; j++){
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     for(int i=0; i<row; i++){
//         for(int j=col-1; j>=0 ; j--){
//             printf("%d ",ar[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//N. Sum of matrix

// #include<stdio.h>

// int main(){
//     int row , col;
//     scanf("%d %d",&row,&col);
//     int ar[row][col];
//     int br[row][col];

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col ; j++){
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             scanf("%d",&br[i][j]);
//         }
//     }
    
//     int c[row][col];

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             c[i][j]= ar[i][j] + br[i][j];
//         }
//     }

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col ; j++){
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//D . Print digits using recursion

// #include<stdio.h>

// void fun(int n){
//     if(n==0){
//         return;
//     }
//     int x = n%10; //1234%10 = 4
//     fun(n/10);
//     printf("%d ",x);
// }

// int main(){

//     int test;
//     scanf("%d",&test);

//     for(int i=0; i<test;i++){
//         int n;
//         scanf("%d",&n);
//         fun(n);
//         if(n==0){
//             printf("0");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//I - count vowels

// #include<stdio.h>
// #include<string.h>

// int fun(char c[], int i){

//     //base case
//     if(c[i] == '\0') return 0;

//     //bakigula except for first index
//     int ans = fun(c,i+1);

//     //jodi boro letter hoi
//     if(c[i] >='A' && c[i] <='Z'){
//         //converting to chuto
//         c[i] = c[i] + 32;
//     }

//     //vowel naki check kortesi
//     if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i'
//     || c[i] == 'o' || c[i] == 'u'
//     ){
//         // +1 kortese jodi vowel hoi 
//         return ans+1;
//     }
//     else{
//         return ans;
//     }
// }

// int main(){
//     char c[1001];
//     fgets(c,1001,stdin);

//     int ans =fun(c,0);
//     printf("%d",ans);
//     return 0;
// }


//J factorial

// #include<stdio.h>

// long long int fun(long long int n){
//    if(n==0){
//     return 1;
//    } 
//    long long int ans = fun(n-1);
//    return ans*n;
// }

// int main(){
//     long long int n;
//     scanf("%lld",&n);
//     long long int ans = fun(n);
//     printf("%lld",ans); 
//     return 0;
// }


//K

// max number 

// #include<stdio.h>
// #include<limits.h>

// int fun(int ar[], int n,int i){
//     if(i==n) {
//         return INT_MIN;
//     }
//     int mx = fun(ar,n,i+1);
//     if(ar[i]>mx){
//         return ar[i];
//     }
//     else{
//         return mx;
//     }
    
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ar[n];

//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }
//     // for(int i=0; i<n;i++){
//     //     printf("%d ",ar[i]);
//     // }

//     int max = fun(ar,n,0);  
//     printf("%d",max);
//     return 0;
// }

//Palindrome
// #include<stdio.h>
// #include<string.h>

// int fun(char s[], int i, int length){
//     if(i >= length) {
//         return 1;
//     }
//     int ans = fun(s, i+1 , length-1);

//     if(s[i] != s[length-1]){
//         return 0;
//     }
//     else{
//         return ans;
//     }
// }

// int main(){
//     char c[1001];
//     scanf("%s",c);

//     // for(int i=0; i<strlen(c);i++){
//     //     printf("%c ",c[i]);
//     // }
//     int size = strlen(c);


//     int ans =  fun(c,0,size);
//     if(ans == 1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }


//Palindrome 2 
// #include<stdio.h>
// #include<string.h>


// int main(){
//     char c[1001] , b[1001];
//     scanf("%s",c);

//     //copy and reverse
//     strcpy(b,c);

//     for(int i=0, j=strlen(b)-1; i<j; i++,j--){
//         int temp = b[i];
//         b[i] = b[j];
//         b[j] = temp;
//     }

//     if(strcmp(c,b) == 0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }

//     return 0;
// }

