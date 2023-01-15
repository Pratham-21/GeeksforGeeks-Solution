//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int s = 0;

     int e = N.size()-1;

     int mid = s+(e-s)/2;

     int suml=0, sumr = 0;

     for(int i = 0; i<mid; i++){

         suml += N[i];
     }

     for(int j = mid+1; j<=e; j++){
         sumr += N[j];
     }

     if(suml == sumr)

         return true;

    else

         return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends