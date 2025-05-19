// bubble short
#include <stdio.h>

int main(){

    int arr[5]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        for (int j=0;j<=size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];                //0()
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}