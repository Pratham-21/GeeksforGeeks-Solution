//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       int first_index  = 0;
        int second_index = 0;
        
        long long sum = 0;
        
        if(s == 0) 
            return {-1};
        
        while(second_index <= n && first_index <= second_index) {
            
            if(sum > s) {
                sum -= arr[first_index];
                first_index++;
            }
            
            else if(sum < s) {
                sum += arr[second_index];
                ++second_index;
            }
            
            else {
                return {first_index+1, second_index};
            }
        }
        
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends