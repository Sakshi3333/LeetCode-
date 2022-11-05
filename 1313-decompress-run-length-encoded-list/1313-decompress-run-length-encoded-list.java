class Solution {
    public int[] decompressRLElist(int[] nums) {
        
        // initialise frequency
        int frequency =0;
        for(int i =0;i<nums.length;i+=2){
            frequency += nums[i];
        }
        
        int output[] = new int[frequency]; // neccessary size
        
        // now add values into the array
        int currentIndex =0;
        for(int i =1;i<nums.length;i+=2){// get the value
            for(int j =0;j<nums[i-1];j++){// add it, number of times the frequency
                output[currentIndex]=nums[i];
                currentIndex++;
            }
            
        }
        return output;
    }
}