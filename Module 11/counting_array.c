#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //zero theke 6 porjonto count korbo
    //aita initializae korte hobe naile garbage
    //value dibe
    int cnt[7] = {0}; // 0 1 2 3 4 5 6 
    for(int i=0; i<n; i++){
        // a[i] hocce value 
        int val = a[i]; 
        //value equals index
        // cnt[3]++ 
        cnt[val]++;   
    }
    
    for(int i=0; i<7; i++){
        printf("%d -> %d\n",i,cnt[i]);
    }
    
    return 0;
}