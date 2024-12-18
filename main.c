#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("reverse array\n");
        int arr[4]={2,3,4,5};
        int temp,i,j;
        for(i=0,j=3;i<j;i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(i=0;i<4;i++){
            printf("%d",arr[i]);
        }
    return 0;
}
