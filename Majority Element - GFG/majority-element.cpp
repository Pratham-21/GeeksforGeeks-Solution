//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int candidate=a[0];
        int vote=1;
        for(int i=1;i<size;i++){
            if(a[i]==candidate)
            vote++;
            else
            vote--;
            if(vote==0){
                candidate=a[i];
                vote=1;
            }
        }        
        int count=0;
        for(int i=0;i<size;i++){
            if(a[i]==candidate)
            count++;
        }
        if(count>size/2)
        return candidate;
        else
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends