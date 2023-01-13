// Reverse array.
#include<stdio.h>
int  rev(int arr[6]){
    for(int i=5;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    printf("%d",rev(arr));
    
}