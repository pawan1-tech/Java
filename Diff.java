package Leetcode;

//1281. Subtract the Product and Sum of Digits of an Integer

import java.util.Scanner;

public class Diff {
    public static void main(String[] args) {
        Scanner na = new Scanner(System.in);
        int n =na.nextInt();
        System.out.println(product(n));
        System.out.println(sum(n));
        System.out.println(subtractProductAndSum(n));

    }

        public static  int subtractProductAndSum(int n) {
            int sum = 0;
            int product = 1;
            while (n > 0) {
                int rem = n % 10;
                n /= 10;
                sum = sum + rem;
                product = product * rem;
            }
//            int diff=product-sum;
            return product - sum;

        }

    static int product(int n){
        int product=1;
        while(n >0){
            int rem=n%10;
            n /=10;
            product=product *rem;

        }return product;
    }
    static int sum(int n){
        int sum=0;
        while(n >0){
            int rem=n%10;
            n /=10;
            sum +=rem;

        }return sum;
    }

}
