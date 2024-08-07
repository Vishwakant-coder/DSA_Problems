#include<iostream>
using namespace std;
int main(){
 int dp[5];
    int arr[] = {1,102,3,10,100};  
	    int ans =0 ;
	    for(int i = 0;i<5;++i) {
	        dp[i] = arr[i];
	        for(int j = i - 1 ;j>=0;j--) {
	            if(arr[j] < arr[i]) {
	                dp[i] = max(dp[i] ,  arr[i] + dp[j]);
	            }
	        } 
	        ans = max(ans , dp[i]);
	        
	    }
        cout<<ans;
     return 0;
}