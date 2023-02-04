package Leetcode;
import java.util.Scanner;
public class Java {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            double mark_avg;
            int result;
            int i;
            int s;
            //define size of array
            s = input.nextInt();
            //The array is defined "arr" and inserted marks into it.
            int[] arr = new int[s];
            for(i=0;i<arr.length;i++)
            {
                arr[i]=input.nextInt();
            }//Initialize maximum element as first element of the array.
            //Traverse array elements to get the current max.
            //Store the highest mark in the variable result.
            //Store average mark in avgMarks.
            int temp=0,j;
            for(i=0;i<s;i++)
            {
                for(j=0;j<(s-i);j++)
                {
                    if(arr[j]<arr[j-1])
                    {
                        temp=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
                    }
                }
            }
            int max=arr[s-1];
            int sum=0;
            for(i=0;i<arr.length;i++){
                sum=sum+arr[i];
            }
            int ave=sum/s;
            System.out.println(max);
            System.out.println(ave);

        }
        //Initialize maximum element as first element of the array.
        //Traverse array elements to get the current max.
        //Store the highest mark in the variable result.
        //Store average mark in avgMarks.
//        int temp=0,j;
//        for(i=0;)
//for(i=0;i<s;i++)
//        {
//            for(j=0;j<(s-i);J++)
//            {
//                if(arr[j]<arr[j-1])
//                {
//                    temp=arr[j];
//                    arr[j]=arr[j-1];
//                    arr[j-1]=temp;
//                }
//            }
//        }
//        int sum=0;
//       for(i=0;i<arr.length;i++){
//            sum=sum+arr[i];
//        }
//        ave=sum/s;
//       System.out.println(arr[s-1]);
//       System.out.println(ave);

    }
