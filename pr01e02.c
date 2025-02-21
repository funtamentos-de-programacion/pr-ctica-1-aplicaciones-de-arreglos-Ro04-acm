#include <stdio.h>
int main()
{
    int arr[3];
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    int i,j;
    printf("Direcciones de arreglo (arr): %p\n",(void*)arr);
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("arr[%d][%d]: %p\n",i,j,&arr[i][j]);
        }
    }

    return 0;
}