#include <stdio.h>

int main(){
    int arr[]={4,5,2,10,8};
    int n = 5;
    int i,j;

    for(i=0;i<n;i++){
        int found = -1;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                found = arr[j];
                break;
            }
        }
        printf("%d-%d\n",arr[i],found);
    }

    return 0;
}