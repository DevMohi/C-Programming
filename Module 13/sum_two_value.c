#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    //array value input nisi
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    // //X er value nibo jeita ste compare korbo
    int x;
    scanf("%d",&x);

    // n-1 hobe karon last value ke compare korar jnno
    // keo nai

    //flag korse karon loop er bhitore jeikono ekta value set kora
    //jabe
    int flag = 0;
    for(int i=0; i<n-1;i++){
        //1 theke hobe ek ghor shamne
        for(int j=i+1; j<n;j++){
            // seeing i and j 
            // printf("%d %d\n",a[i],a[j]); 


            if(a[i] + a[j] ==x){
                flag=1;
            }
    
        }
    }

    if(flag==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }


    return 0;
}