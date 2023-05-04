//Problem 1
// #include<stdio.h>

// int my_abs(){
//     int n;
//     scanf("%d",&n);
//     if(n<0){
//         n = n*-1;
//     }
//     else{
//         n = n;
//     }
//     return n;
// }

// int main(){
//     int ans = my_abs();
//     printf("%d",ans);
//     return 0;
// }


//Problem 2

// #include<stdio.h>



// void fun(char ar[]){
//     int count = 0;
//     // for(int i=0; ar[i] != '\0'; i++){
//     //     count++;
//     // }

//     // 2nd way 
//     // While loop die length ber kora  
//     int i=0;
//     while(ar[i] != '\0'){
//         count++;
//         i++;
//     }
//     printf("%d",count); 
// }

// int main(){
//     char ar[6] = "Hello";
//     fun(ar);
//     return 0;
// }


//Practice 3
// #include<stdio.h>
// void fun (int *ar, int n)
// {
//     printf("%d", *(ar+n-1));
// }

// int main(){
//     int ar[5] = {1,5,4,10,2};
    
//     fun(ar,5);
//     //sending array address
//     //ar -> ar[0]
//     return 0;
// }


//PRoblem 5
// #include<stdio.h>

// void change_it(int ar[], int n){
//     //last index
//     *(ar+n-1) = 100;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }

//     change_it(ar,n);

//     for(int i=0; i<n; i++){
//         printf("%d ",ar[i]);
//     }
//     return 0;
// }

//Problem 6


// #include<stdio.h>

// void swap_it(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap_it(&a,&b);

//     printf("%d %d",a,b);
//     return 0;
// }