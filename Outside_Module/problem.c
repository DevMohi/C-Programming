// #include<stdio.h>
// #include<string.h>


// // no return hoile oitake void bole 
// void check_char (char input[], char ch){
//     for(int i=0; i<strlen(input); i++){
//         char val = input[i];
//         if(val == ch){
//             printf("YES\n");
//             //Yes pawa sesh return kore dibe
//             return;
//         }
//     }
//     printf("NO\n");
// }

// int main(){
//     char a[] = "hellobae", b[] = "world";
//     char c= 'a';
//     check_char(a,c);
//     return 0;
// }


//has return + no parameter

// #include<stdio.h>

// //void mane kono kichu expect kortesena ai jaigai
// int make_sum(void){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a+b;
//     return sum;
// }

// int main(){
//     int s = make_sum();
//     printf("%d",s);
//     return 0;
// }


//No return + nO parameter
#include<stdio.h>

//void mane kono kichu expect kortesena ai jaigai
void take_array(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int test;
    scanf("%d",&test);
    for(int t=1; t<=test; t++){
        take_array();
    }
    return 0;
}