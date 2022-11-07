class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count =0;
        int difference;
        
        for(int j =0;j<nums.size();j++)
        {
            for(int i =0;i<j;i++){
                difference = nums[i] - nums[j];
                
                if(difference == k || 0-difference == k)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};