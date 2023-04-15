//inserting array
//array size ek beshi niba 

//value 10 20 30 40 50
//index 0  1  2  3  4  5

//5 index  e nise first value ta empty space
//ar[5] = ar[4] 50
//ar[4] = ar[3] 40 
//ar[3] = ar[2] 30
//ar[2] = ar[1] 20
//ar[1] = 100
//erkm korte ar[1] khali hobe ar aikane value set kore dibo


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ar[n+1]; //ekta beshi size nibo karon ekta value extra nicci
    
//     //tarpor input nibo
//     for(int i=0; i<n; i++){
//         scanf("%d",&ar[i]);
//     }
//     //kon position e input diba ar value
//     int pos,val; 
//     scanf("%d %d",&pos,&val);

//     // int pos = 1  pos = 1 + 1 = 2 
//     for(int i=n; i>=pos+1 ; i--){
//         ar[i] = ar[i-1]; // ar[5] == ar[4]
//     }

//     //
//     //value ta assign kore disi
//     ar[pos] = val;  //ar[1] = 100;

//     for(int i=0; i<=n; i++){
//         printf("%d ",ar[i]);
//     }

//     return 0;
// }

//done by me

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    //ekta beshi value nite hobe coz daane move korbo

    int ar[n+1];

    //value nilam
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    // abr value daane nibo 
    int pos,val;
    scanf("%d %d",&pos,&val);

    // compared with pos because 0 1 lagbena  

    for(int i=5; i>= pos+1 ;i--){
        ar[i] = ar[i-1];
    }

    //0 1 -> 1 + 1 = 2
    ar[pos] = val;

    for(int i=0; i<=5; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}