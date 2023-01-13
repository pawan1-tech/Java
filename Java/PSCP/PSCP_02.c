// #include<stdio.h>
// int main(){
//     float a1,a2,result;
//     int n;
//     printf("Enter two number :");
//     scanf("%f %f",&a1,&a2);
//     printf("Choose \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Divide \n5.Square\n");
//     scanf("%d",&n);
//     switch (n)                      
//     {
//     case 1:
//         result=a1+a2;
//         printf("Addition is %.2f",result);
//         break;
    
//     case 2:
//         result=a1-a2;
//         printf("Subtraction is %.2f",result);
//         break;
        
//     case 3:
//         result=a1*a2;
//         printf("Multiplication is %.2f",result);
//         break;   

//     case 4:
//         result=a1/a2;
//         printf("Divide is %.2f",result);
//         break;

//     case 5:
//         result=a1*a1;
//         printf("Addition is %.2f ,%.2f",result,a2*a2);
//         break;

    
//     default:
//     printf("Invalid Option!!");
//         break;
//     }
//     return 0;
// }
 
 #include <stdio.h>
 int main()
 {
    int a,b,n;
    printf("Enter the value of a and b :\n");
    scanf("%d %d",&a ,&b);
    printf("Choose 1.add\n 2.subtract\n 3.multiply\n 4.divide\n 5.square\n");
    scanf("%d",n);
    switch(n)
    case 1:
    add =a+b;
    break;

    case 2:
    subtract =a-b;
    break;

    default
     printf("invalid number")


 }