#include<stdio.h>

int main(){
    //ekta beshi space nite hoise null er jnno

    //5 size hocce string
    //kintu ek beshi nicce coz null er jnno ekta jaiga dile string
    //automatic nie ne

    //aerkm initiatlize korle gurantee nai last e null boshbe j
    // char a[6] = {'R','a','h','a','t'}; 

    // aita guranteed 
    char a[6]= "Rahat";
    int sz = sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    // //aerkm koreo print kora jai
    // for(int i=0; i<5; i++){
    //     printf("%c\n",a[i]);
    // }

    // string erkm o pring kora jai , aita die full word ta ekste ashbe 
    //null die end korte hobe naile ulta pulta character dibe
    //Null - '\0'
    //For loop e null dewa lagena
    printf("%s",a);

    return 0;
}