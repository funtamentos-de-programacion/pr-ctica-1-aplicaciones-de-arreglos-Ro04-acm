#include <stdio.h>
int main()
{
    int arr[5];
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=13;
    arr[4]=14;
    int i;
    printf("Direcciones de arreglo\n");
    for (i=0;i<5;i++){
        printf("arr[%d]: %p\n",i,&arr[i]);
    }
    printf("diferencias");
    for (i=0;i<4;i++){
        printf("arr[%d] y arr[%d]: %ld bytes\n",i,i+1,(char*)&arr[i+1]-(char*)&arr[i]);
    }

    return 0;
}