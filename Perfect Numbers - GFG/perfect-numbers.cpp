//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
         int sum=0;
       for(int i=1;i<sqrt(N);i++)
       {
           if(N%i==0)
           {
               if(i==1)
               sum+=i;
               else 
               sum+=i+N/i;
           }
       }
       return (sum==N);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends