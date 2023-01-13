#include<stdio.h>
int main(){
    int arr[8]={55,45,20,34,19,65,82,60};
    int min=arr[5],max=0;
    for(int i=0;i<7;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Best Buy is at %d,Best sell is at %d",min,max);
    return 0;
}