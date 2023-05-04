//Problem 1
// #include<stdio.h>

// void sum (){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",a+b);
// }

// int main(){
//     // int a,b;
//     // scanf("%d %d",&a,&b);
//     // int ans = sum(a,b);
//     // printf("%d\n",ans);

//     sum();
    
//     return 0;
// }



//Problem 2

// #include<stdio.h>

// void print(int n){
//     for(int i=1; i<=n; i++){
//         printf("%d ",i);
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }


//Problem 3 - max and min

// #include<stdio.h>
// #include<limits.h>

// void min_and_max_finder(){
//     int min = INT_MAX,max =INT_MIN;
//     int n;
//     scanf("%d",&n);
//     int a[n];
    
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
    
//     for(int i=0; i<n; i++){
//         if(a[i]<min){
//             min = a[i];
//         }
//         if(a[i]> max){
//             max = a[i];
//         }
//     }

//     printf("%d %d",min,max);
// }

// int main(){
//     min_and_max_finder(); 


//     return 0;
// }



//Problem 4 - Sort numbers

// #include<stdio.h>

// int main(){
    
//     int n=3;
//     int ar[n];
//     int copy[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }


//     //Copying thr array
//     for(int i=0; i<n;i++){
//         copy[i] = ar[i];
//     }
 
  


//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(ar[i]>ar[j]){
//                 int tmp = ar[i];
//                 ar[i] = ar[j];
//                 ar[j] = tmp; 
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         printf("%d\n",ar[i]);
        
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%d\n",copy[i]);
        
//     }
   
// }