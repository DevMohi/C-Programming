#include<stdio.h>
 
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
 
    int ar[100001];
 
    for(int i=1; i<=n; i++){
        scanf("%d",&ar[i]);
         
    }
    int freq[m + 1]; // frequency array, initialized with all zeros
    for (int i = 0; i <= m; i++) {
        freq[i] = 0;
    }
 
    for(int i=1; i<=n; i++){
        int val = ar[i];
        freq[val]++;     
    }
 
    for(int i=1 ; i<=m; i++){
        printf("%d\n",freq[i]);
    }
    return 0;
}