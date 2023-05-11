
//Missing Number = NS
// #include<stdio.h>

// int main(){
//     int test;
//     scanf("%d",&test);
    
//     for(int i=0; i<test; i++){
//         long long int s,a,b,c;
//         scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        
//         long long int lost_number = s-(a+b+c);
//         if(lost_number <= 0){
//             printf("0\n");
//         }
//         else{
//             printf("%lld\n",lost_number);
//         }
//     }
//     return 0;
// }



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
