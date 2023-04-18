#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    int min = INT_MAX;
    int max = INT_MIN;

    int pos,pos2;

    for(int i=0; i<n; i++){
         //taking inputs
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++){
        // Minimun and max found 
        if(ar[i] < min){
            min = ar[i];
            pos = i;

        }
        if(ar[i] > max){
            max= ar[i];
            pos2 = i;
        }
    }

    //Morphex method
    // for(int i=0; i<n; i++){
    //     //swapping values
    //     if(ar[i] == min){ 
    //         ar[i] = max;
    //     }
    //     else if(ar[i] == max){
    //         ar[i] = min;
    //     }
    //     printf("%d ",ar[i]);
    // }

    //dipon method
    int swap;
    swap = ar[pos];
    ar[pos] = ar[pos2];
    ar[pos2] = swap;
    

    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}