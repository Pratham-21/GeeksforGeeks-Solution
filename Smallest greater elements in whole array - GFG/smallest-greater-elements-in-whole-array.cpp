//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}

// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
   set<int>s;
    for(int i=0;i<n;i++){
     s.insert(arr[i]);  
    }
    vector<int>v(s.begin(),s.end());
    map<int,int>m;
    for(int i=0;i<v.size()-1;i++){
        m[v[i]]=v[i+1];
    }
    m[v[v.size()-1]]=-10000000;
    for(int i=0;i<n;i++){
        arr[i]=m[arr[i]];
    }
    return arr;
}
