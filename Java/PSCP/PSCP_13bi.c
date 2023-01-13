#include<stdio.h>
int main(){
    int no1,no2,no3;
    printf("Enter three number :");
    scanf("%d %d %d",&no1,&no2,&no3);
    if(no1>no2 && no1>no3){
        printf("%d is Greatest ",no1);
    }else if(no2>no1 && no2>no3){
        printf("%d is Greatest",no2);
    }else{
        printf("%d is Greatest",no3);
    }
    return 0;
}