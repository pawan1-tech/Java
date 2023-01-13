#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n==0){
        printf("It is equal to zero");
    }
    else if(n<0){
        printf("It is negative number");
    }
    
    else 
        printf("It is positive number");
    
    return 0;
}