#include <stdio.h>
int main()
{
    int arr[2][3];
    arr[0][0]=10;
    arr[0][1]=12;
    arr[0][2]=13;
    arr[1][0]=20;
    arr[1][1]=21;
    arr[1][2]=22;
    int i,j;
    printf("Direcciones de arreglo (arr): %p\n",(void*)arr);
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("arr[%d][%d]: %p\n",i,j,&arr[i][j]);
        }
    }
    return 0;
}