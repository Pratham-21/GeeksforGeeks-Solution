//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
        if(s1=="0" || s2=="0")
            return "0";
        int sign=1;
        if(s1[0]=='-' && s2[0]=='-')
            sign=1;
        else if(s1[0]=='-' || s2[0]=='-')
            sign=-1;
        int f1=0,f2=0;
        if(s1[0]=='-')
            f1=1;
        if(s2[0]=='-')
            f2=1;
        int n1=s1.length(),n2=s2.length();
        vector<int>ans(n1+n2);
        for(int i=n1-1;i>=f1;i--){
            for(int j=n2-1;j>=f2;j--){
                ans[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
                ans[i+j]+=ans[i+j+1]/10;
                ans[i+j+1]%=10;
            }
        }
        string res="";
        int i=0;
        for(;i<ans.size();i++){
            if(ans[i]!=0)
                break;
        }
        for(;i<ans.size();i++)

            res+=to_string(ans[i]);

        return sign==-1?"-"+res:res;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends