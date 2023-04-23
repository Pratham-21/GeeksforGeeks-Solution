//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
      int reversed = 0, remainder= 0, orignal= 0, r= 0;
    while (n != 0) {
        remainder = n % 10;
        if(remainder==0)
        {
            remainder=5;
        }
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    while (reversed != 0) {
        r = reversed % 10;
        orignal = orignal * 10 + r;
        reversed /= 10;
    }

    return orignal;

}