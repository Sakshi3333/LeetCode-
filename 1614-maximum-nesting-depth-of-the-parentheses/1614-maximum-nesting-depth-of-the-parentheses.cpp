class Solution {
public:
    int maxDepth(string s) {
        int current_max =0;     // current count
        int max = 0;
        int n = s.length();
        
        for(int i =0;i<n;i++)
        {
            if(s[i] == '(')
            {
                current_max++;
                if(current_max > max)
                    max = current_max;
            }
            else if(s[i] == ')')
            {
                if(current_max >0)
                    current_max--;
                else
                    return -1;
            }
        }
        if(current_max != 0)
            return -1;
        
        return max;
    }
};