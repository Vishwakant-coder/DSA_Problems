#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int ll=0,mid,ul= n;

        while (ll<=ul)
        {
            mid=(ll+ul)/2;
            if(arr[mid]==1 && arr[mid-1]==0)
                return mid;
            else if(arr[mid]==0 && arr[mid+1]==1)
                return mid+1;
            else if (arr[mid]==0)
                 ll=mid+1;
            else
                ul=mid-1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}