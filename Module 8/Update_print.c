#include <stdio.h>

int main() {

    int n,x,v;
    scanf("%d",&n);
    
    int ar[n];
    
    for(int i=0; i<n;i++){
        scanf("%d",&ar[i]);  
    }
    //aita loop e input ninai coz barbar
    //gurte thakbe
    scanf("%d %d",&x,&v);


    //aikane condition check korsi
    //replaced it with v
    for(int i=0; i<n;i++){
        //jodi equal hoi index
        if(i==x){
            //then replace it with v
            ar[i] = v;
        }
    }
    //finally reversed it here
    for(int i=n-1; i>=0;i--){
        printf("%d ",ar[i]);
    }
}