//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	   unordered_set<int> s;
	    vector<int> v;
	    int c=2;
	    while(N>1){
	        if(N%c==0){
	            if(s.find(c)==s.end()){
	                v.push_back(c);}
	                
	               s.insert(c);
	               N/=c;
	        }
	        else
	         c++;
	    }
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends