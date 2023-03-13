//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long min_len = INT_MAX, tot_stick = 0, tot_peri= 0;
        for(int i =0; i<N;i++){
            if(B[i] % 2 == 1) B[i]--;
            if(B[i] >= 2) min_len = min(min_len, (long)A[i]);
            
            tot_stick += B[i];
            tot_peri += B[i] * A[i];
        }
        if(tot_stick % 4 != 0) tot_peri -= 2* min_len;
        
        return tot_peri;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends