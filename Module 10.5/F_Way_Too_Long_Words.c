#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);

    char a[101];
    int count = 0;

    for(int i=0; i<n; i++){
        //3 bar input nibe
        scanf("%s",&a);
        if(strlen(a)>10){
            // count =0 kore dise , coz ager gulor ste add hoie jacce 
            count =0;

            for(int i=0; i<strlen(a); i++){
                if(i==0){
                    printf("%c",a[i]);
                }
            }
            //1 thek till len-1 korsi 
            for(int i=1; i<strlen(a)-1; i++){
                    count++;
            }
            printf("%d",count);

            //
            for(int i=0; i<strlen(a); i++){
                if(i == strlen(a)-1){
                    printf("%c",a[i]);
                }
            }
            printf("\n");
        }
        else{
            for(int i=0; i<strlen(a); i++){
                printf("%c",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

//too long length > 10 characters 
//first character
//print number of char between first and last
//last character