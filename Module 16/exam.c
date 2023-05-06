//Question 1

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int k=1;
//     int space = n-1;


//     for(int i=1; i<=(2*n)-1; i++){
//         //Age space print koro;
//         for(int j=1; j<=space; j++){
//                 printf(" ");
//         }

//         for(int j=1; j<=k; j++){
//             printf("%d",j);
//         }

//         if(i<=n-1){
//             k=k+2;
//             space--;
//         }
//         else{
//             k=k-2;
//             space++;
//         }

//         printf("\n");
//     }
//     return 0;
// }



//Question 2

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     int space = n-1;
//     int k =1;

//     for(int i=1; i<=n; i++){
//         //for space
//         for(int j=1; j<=space; j++){
//             printf(" ");
//         }
//         //for numbers
//         for(int j=1; j<=k;j++){
//             printf("%d",i);
//         }

//         space--;
//         k++;
//         printf("\n");
//     }

//     return 0;
// }


// Question 3 

// #include<stdio.h>

// int count_before_zero(int *ar, int n){
//     int count = 0;
//     for(int i=0 ; i<n; i++){
//         if(ar[i] ==0){
//             break;
//         }
//         else{
//             count++;
//         }
//     }
//     return count;
// }

// int main(){

//     int n;
//     scanf("%d",&n);

//     int ar[n];
//     for(int i=0 ; i<n; i++){
//         scanf("%d",&ar[i]);
//     }

//     // Sending n and ar as parameters in function 
//     int count = count_before_zero(ar, n);

//     printf("%d",count);
//     return 0;
// }


// Question 4

//1.  Has return + parameter 
// Takes a parameter and returns an value 

// int multiply(int x,int y){
//     //code
//     int multiply = x*y;
//     return multiply;
// }

// #include<stdio.h>

// int main(){
//     int ans = multiply(10,20);
//     printf("%d",ans);
//     return 0;
// }



// //2. Has return + no parameter

// #include<stdio.h>

// int square(void){
//     int x;
//     scanf("%d",&x);
//     int ans = x*x;
//     return ans; 
// }


// int main(){
//     int ans = square();
//     printf("%d",ans);
//     return 0;
// }


//3. No return + parameter

// #include<stdio.h>

// void even(int x){
//     if(x %2 ==0){
//         printf("Even");
//     }
//     else{
//         printf("Not an even");
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     even(n);
//     return 0;
// }


//4. no return + no parameter 

// #include<stdio.h>

// void greater(void){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("a is greater");
//     }
//     else{
//         printf("b is greater");
//     }
// }

// int main(){ 
//     greater();
//     return 0;
// }



// question 5

#include<stdio.h>
#include<string.h>


int is_palindrome( char *a ){
    // 0 1 2  5 4 3
    for(int i=0,j=strlen(a+1); i<j; i++,j--){
        if(a[i] != a[j]){
            return 0;
        }    
    }
    return 1;
}

int main(){
    char a[1001];
    scanf("%s",&a);

    int ans = is_palindrome(a);
    if(ans == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }

    return 0;
}



// Pass by value - Just value ta patai from main functions er x(copy kore) but wont have
// effect on the main functions x er value.
 
//  #include<stdio.h>
 
// void proof(int x){
//     printf("function er x er address: %p\n",&x);
//     //changing value here wont change the value in the main functions x;
//     x= 500;
//     printf("Function x er value -> %d\n",x);

// }

//  int main(){
//     int x = 10;
//     printf("Main er x er address: %p\n",&x);

//     proof(x); 

//     printf("Main x er value -> %d\n",x);
//     return 0;
//  }



//Pass by reference - Main function theke address patano hoi arekta function ke argument hishebe, oi address ta use kore dereference kore value change kora jai

//  #include<stdio.h>
 
// void proof(int *x){
//     //changing value here will change the value in the main functions x as dereference hocce;
//     *x= 500;
//     printf("Function x er value -> %d\n",*x);

// }

//  int main(){
//     int x = 10;

//     //sending address
//     proof(&x); 
//     printf("Main x er value -> %d\n",x);

//     return 0;
//  }
