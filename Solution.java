package Leetcode;

class Solution {
    public int[] buildArray(int[] nums) {
        int []ans ={};
        for(int i = 0; i<nums.length;i++){

            ans[i] = nums[nums[i]];
            return ans;
        }
        return ans;
    }
}