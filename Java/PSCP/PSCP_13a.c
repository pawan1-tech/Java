#include<stdio.h>
int main(){
    int arr[7]={13,56,25,10,36,33,71};
    for(int i=0;i<7;i++){
        if(arr[i]==36){
            printf("36 is at %d position",i+1);
        }
    }
    return 0;
}