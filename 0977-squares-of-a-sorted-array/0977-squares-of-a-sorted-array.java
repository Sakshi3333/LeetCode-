class Solution {
    public int[] sortedSquares(int[] nums) {
        int left =0,right =nums.length-1;
        int pointer = nums.length-1;
        int[] result =new int[nums.length];
        
        while(left<=right){
            if(Math.abs(nums[left])> Math.abs(nums[right])){
                result[pointer]=nums[left]*nums[left];
                left++;
            }
            else{
                result[pointer] = nums[right]*nums[right];
                right--;
            }
            pointer--;
        }
        return result;
        
    }
}