//Problem 1 - Print It

// #include<stdio.h>

// int main(){
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
// }


//Problem 2 - Multiply

// #include<stdio.h>

// int main(){
//     long long int a,b;
//     scanf("%lld %lld",&a,&b);
//     long long int multiply = a*b;
//     printf("%lld",multiply);
// }


//Problem 3 - Divisible
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     if(n>=0){
//         if(n%3==0){
//             printf("YES");
//         }
//         else{
//             printf("NO");
//         }
//     }
// }


// Problem 4- Divisible 2 
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         if(i%3==0 && i%7==0){
//             printf("%d\n",i);
//         }
//     }
// }


//Problem 5 Shopping

//Alisa will only buy shoes if you also buy a pair. 
//and you will buy a pair of shoes if you can buy punjabi.
//Punjabi nile shoes nibo 
//500 taka or more thakle shoes kinbo
//you will punjabi if money>1000


#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    //punjabi kinbar condition
    if(n>1000){
        printf("I will buy Punjabi\n");
        int deduct = n-1000;
        if(deduct >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }
}