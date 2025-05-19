// inserting element in a array 
#include <stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int v,p;
    scanf("%d%d",&v,&p);
    for (int i=n-1;i>=p;i--){
        arr[i+1]=arr[i];
    }
    arr[p]=v;
    for(int i=0;i<=n;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
