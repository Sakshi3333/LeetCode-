class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        int n;
        ans.push_back(first);
        for(int i =0;i<encoded.size();i++)
        {
            n = ans[i]^encoded[i];
            ans.push_back(n);
        }
        return ans;
    }
};