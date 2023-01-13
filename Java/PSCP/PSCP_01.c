#include<stdio.h>
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum + i;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;

}