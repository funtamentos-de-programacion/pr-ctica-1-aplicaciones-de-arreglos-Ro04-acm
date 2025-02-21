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
    printf("Direccion mat: %p\n",(void*)arr);
    printf("Direccion mat[0]: %p\n",(void*)arr[0]);
    printf("Direccion mat[0][0]: %p\n",(void*)&arr[0][0]);
   
    return 0;
}