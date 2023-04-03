//Problem 1
// #include<stdio.h>

// int main(){
//     int marks;
//     scanf("%d",&marks);

//     if(marks == 95){
//         printf("Recently I heard that you've achieved\n");
//         printf("95%% marks in your exam\n");
//         printf("This is brilliant!\n");
//         printf("I wish you'll shine in your life!\tGood\n");
//         printf("luck with all the barriers(/\\) in your life.");
//     }
// }



//Problem 2

// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     int addition = a+b;
//     int subtraction = a-b;
//     int multiplication = a*b;
//     float division = a*1.0/b;

//     printf("%d + %d = %d\n", a,b,addition);
//     printf("%d - %d = %d\n", a,b,subtraction);
//     printf("%d * %d = %d\n", a,b,multiplication);
//     printf("%d + %d = %.2f\n", a,b,division);
// }


//Problem 3

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     if(n>=0){
//         if(n%2==0){
//             printf("Even");
//         }
//         else{
//             printf("Odd");
//         }
//     }
//     else{
//         printf("Give a positive integer");
//     }
// }


//Problem 4

// #include<stdio.h>

// int main(){
//    int n;
//    scanf("%d",&n);

//    if(n>0){
//     printf("positive");
//    } 
//    else if(n==0){
//     printf("zero");
//    }
//    else{
//     printf("negative");
//    }
// }


#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n>=10000){
        printf("Gucci Bag\n");
        if(n>20000){
            printf("Gucci Belt");
        }
    }
    else if(n>=5000){
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }
}