//Copy elements if two arrays
//into another array

#include<stdio.h>

int main(){
    //first e duita array input nisi
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int m;
    scanf("%d",&m);
    int b[m];

    for(int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }
    //duita size mile [n+m] hobe ans hobe
    int ans[n+m];

    for(int i=0; i<n;i++){
        ans[i] = a[i];
    }


    //aikane i set kore dise n er value 5
    //taile ekn i barbe 5 theke and not 0
    int i= n;

    for(int j=0; j<m; j++){
        ans[i] = b[j];
        //aikane i er value barate hobe 
        i++;
    }

    //Total size
    for(int i=0; i<n+m;i++){
        printf("%d ",ans[i]);
    }

    return 0;
}