//Throretical
//Array of array


// a[5][4] = row column 
//protita row tah 1 ta array ase
// value = row *col variable toiri hoi 



//Input and output

#include<stdio.h>

int main(){
    //declaring 2D array
    int a[5][3];


    //Taking input in 2D array
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            //You can see properly with this
            // printf("a[%d][%d]\n",i,j);

            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            //You can see properly with this
            // printf("a[%d][%d]\n",i,j);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}