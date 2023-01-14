//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
           if(S==0)
        {
            if(N>1) return "-1";
            
            return "0";
        }
        else if(S <= 9)
        {
            string str;
            str.push_back(S + '0');
            N--;
            while(N--)
            {
                str.push_back('0');
            }
            return str;
        }
        else
        {
            if(S > 9*N)
            {
                return "-1";
            }
            string str;
            while(S - 9 >= 0)
            {
                str.push_back('9');
                N--;
                S -= 9;
            }
            if(S)
            {
                str.push_back(S + '0');
                N--;
            }
            while(N--)
            {
                str.push_back('0');
            }
            return str;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends