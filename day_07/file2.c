// find a given element(searching)   linear search
#include <stdio.h>

int main(){
    int size,find;
    scanf("%d",&size);
    scanf("%d",&find);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if (find==arr[i]){
            printf("present");
            return 0;   //-> breaks or stops the loop and exit the code
        }
    }printf("NOt present");
    return 0;
}