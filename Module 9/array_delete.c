//Array delete 
#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int ar[n];

    //prints index from 0 to 4 if n is 5
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    // 1 -> 2 
    int pos; 
    scanf("%d",&pos);

    for(int i= pos; i<n-1; i++){
        ar[i] = ar[i+1];
    }
    //print korsi 3 porjonto 0 1 2 3 
    for(int i=0; i<n-1; i++){
        printf("%d ",ar[i]);
    }
    return 0;
}

//aRRAY
//5
// 1 2 3 4 5
// POS -1

// aNS - 1 3 4 5

