class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[] f = new int[101];
        for(int num:nums){
            f[num]++;
        }
        int pairs =0;
        for(int i =0;i<101;i++){
            pairs += (f[i]/2);
        }
        return new int[]{pairs,nums.length-2*pairs};
        
    }
}