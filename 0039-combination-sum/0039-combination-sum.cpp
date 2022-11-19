class Solution {
public:
    vector<vector<int>> ans;
    void help(int i, vector<int>& C,int t,vector<int>&sol)
    {
        if(t==0)
        {
            ans.push_back(sol);
            return;
        }
        if(t<0)
        {
            return;
        }
        if(i==C.size())
        {
            return;
        }
        // skip the ith element
        help(i+1,C,t,sol);
        
        // pick the ith ele
        sol.push_back(C[i]);
        help(i,C,t-C[i],sol);
        //backtracking
        sol.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& C, int t) {
        vector<int> sol;
        help(0,C,t,sol);
        return ans;
    }
};