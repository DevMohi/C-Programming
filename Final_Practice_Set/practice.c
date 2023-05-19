//First code 
// #include<stdio.h>

// int main(){
//     printf("Programming is fun!!");
//     return 0;
// }



//trinagle

// #include<stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if(a==0 && b==0 && c==0){
//         printf("No");
//     }
//     else if(a == b && a==c && b==c){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }

//     return 0;
// }

//Highest Marks

// #include<stdio.h>
// #include<limits.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int ar[n];

//     //Taking inputs
//     for(int i=0; i<n;i++){
//         scanf("%d",&ar[i]);
//     }

//     int max = INT_MIN;
//     for(int i=0; i<n;i++){
//         if(ar[i] > max){
//             max = ar[i];
//         }
//     }

    
//     for(int i=0; i<n;i++){
//         printf("%d ", max - ar[i]);    
//     }
//     return 0;
// }

//hash and star pattern

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i == n/2){
                printf("#");
            }
            else if(j == n/2){
                printf("#");
            }
            else{
                printf("*");   
            }
        }
        printf("\n");
    }
    return 0;
}

//Search Engine !
// In your code, the issue lies with the condition if(pos == 0) to check if the number is not found. This condition is incorrect because pos is initialized as 0, so if the number is not found, it will incorrectly assume that the position is 0.

// To fix this, you can initialize pos as -1 instead of 0. Then, modify the condition to check if pos is still -1 after the loop, indicating that the number was not found. Here's the corrected code:


//Search engine

// #include<stdio.h>

// int main(){
//     int t;
//     scanf("%d",&t);

//     for(int i=0;i<t;i++){
//         int n;
//         scanf("%d",&n);

//         int ar[n];
//         for(int i=0; i<n;i++){
//             scanf("%d",&ar[i]);
//         }
//         int x;
//         scanf("%d",&x);

//         int pos = -1;
//         for(int i=0; i<n;i++){
//             if(ar[i] == x){
//                 pos = i;
//                 break;
//             }
//         }
        
//         if(pos == -1){
//             printf("Case %d: Not Found\n",i+1);
//         }
//         else{
//             printf("Case %d: %d\n",i+1,pos+1);
//         }
//     }

//     return 0;
// }
