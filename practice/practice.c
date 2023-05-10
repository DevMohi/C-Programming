// Pattern 1 

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int k=1;

//     for(int i=1; i<=n ; i++){
//         for(int j=1; j<=k;j++){
//             printf("*");
//         }
//         k++;
//         printf("\n");
//     }
//     return 0;
// }

//Reverse way pattern
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int k=n;

//     for(int i=1; i<=n ; i++){
//         for(int j=k; j>=1;j--){
//             printf("*");
//         }
//         k--;
//         printf("\n");
//     }
//     return 0;
// }



//Pattern 2 practice
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int star = 1;

//     for(int i=1; i<=n; i++){
//         // For space  
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star; j++){
//             printf("*");
//         }
//         space--;
//         star=star+2;
//         printf("\n");
//     }
//     return 0;
// }

//Pattern reversed

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = 0;
//     int star = 2*n-1;

//     for(int i=1; i<=n; i++){
//         // For space  
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         //For star
//         for(int j=1; j<=star; j++){
//             printf("*");
//         }
//         space++;
//         star=star-2;
//         printf("\n");
//     }
//     return 0;
// }




//Pattern 3 pracrice

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int k=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=k; j++){
//             printf("%d",j);
//         }
//         k++; 
//         printf("\n");
      
//     }
//     return 0;
// }



//Pattern 4

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int space = n-1; 
//     int star = 1;

//     for(int i=1; i<=(2*n)-1;i++){
//         // for space 
//         for(int j=1; j<=space;j++){
//             printf(" ");
//         }
//         for(int j=1; j<=star;j++){
//             printf("*");
//         }
   

//         if(i<=n-1){
//             space--;
//             star=star+2;
//         }
//         else{
//             space++;
//             star = star-2;
//         }

//         printf("\n");
//     }
//     return 0;
// }



//Pattern 5
// Two values equal one x 

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int ar[n];


//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     } 

//     int x;
//     scanf("%d",&x);

//     int flag=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             // printf("%d %d\n",ar[i],ar[j]); 
            
             
//             if(ar[i] +ar[j] == x){
//                 flag =1;
//             }   
//         }
//     }

//     if(flag==0){
//         printf("No");
//     }
//     else{
//         printf("YES");
//     }

    

//     return 0;
// }


// 22 
//  #include <stdio.h>

//     void swap(int *p, int *q)
//     {
//         int temp = *p; *p = *q; *q = temp;
//     }
//     void main()
//     {
//         int a = 6, b = 5;
//         swap(&a, &b);
//         printf("%d %d\n", a, b);
//     }


// #include <stdio.h>
//     void m(int *p)
//     {
//         int i = 0;
//         for(i = 0;i < 5; i++)
//         printf("%d\t", p[i]);
//     }
//     void main()
//     {
//         int a[5] = {6, 5, 3};
//         m(&a);
//     }

//array 
// #include <stdio.h>
//     void m(int p, int q)
//     {
//         int temp = p;
//         p = q;
//         q = temp;
//     }
//     void main()
//     {
//         int a = 6, b = 5;
//         m(a, b);
//         printf("%d %d\n", a, b);
//     }


// #include <stdio.h>
//     int main()
//     {
//         int ary[4] = {1, 2, 3, 4};
//         int *p;
//         p = ary + 3;
//         *p = 5;
//         printf("%d\n", ary[3]);
//     }


// #include <stdio.h>
// #include <string.h> 

// // = 3 

// int is_palindrome(char *arr) {
//     int len = strlen(arr);
//     for (int i = 0; i < len / 2; i++) {
//         if (arr[i] != arr[len - i - 1]) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     char arr[11];
//     scanf("%s", arr);
//     int result = is_palindrome(arr);
//      if (result == 1) {
//         printf("Palindrome\n", arr);
//     } else {
//         printf("Not Palindrome\n", arr);
//     }

//     return 0;
// }



//kATROYOSHKA

#include<stdio.h>

int main(){
    
    return 0;
}