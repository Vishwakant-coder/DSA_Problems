#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i,j=0,k=1;

    for ( i = 0; i < n; i++) 
    {
        if(k){

        if(arr[i]==0 && j== -1){
            j=i; 
           k--; 
        }
         }
     
        if(arr[j]==0 && arr[i]!=0){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
	}
};

//{ Driver Code Start
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}