//reversing an array
//Two pointers stack method
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    //My method
    // for(int i=0,j=n-1; i<j; i++,j--){
    //     int tmp = ar[i];
    //     ar[i] = ar[j];
    //     ar[j] = tmp; 
    // }

    //Pathan bhai method
    int i=0, j=n-1; 
    while(i<j){
        //ar[i] er first value ta save kore
        //tmp ta trpor ar [j] tah koro
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp; 
        i++;
        j--;

    }

    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}