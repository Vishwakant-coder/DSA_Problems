 #include <bits/stdc++.h>
// #include<vector>
 using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     vector<int> topK(vector<int>& nums, int k) {
//         // Code here
//         int size=nums.size();
//         int arr1[size];
//         int n=0;
//         for (int i = 0; i <size; i++)
//         {
//             if(nums[i]==n){
//                 arr1[n]++;
//                 n++;
//             }
//             else{
//                 arr1[n]=0;
//                 n++;
//             }
//         }
//         int m=0,n=1;
//         int a[k];
//         a[0]=m;
//         for (int i = 0; i < size; i++)
//         {
//             m=max(m,arr1[i])
//             if(arr1[i]!=0){ 
//                 if(arr1[i]<a[0]){
//                     a[n]=min(i,a[n])
//                 }
//             }
            
//         }
        
        

//     }
// };


// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n;
//         cin >> n;
//         vector<int> nums(n);
//         for (auto &i : nums) cin >> i;
//         int k;
//         cin >> k;
//         Solution obj;
//         vector<int> ans = obj.topK(nums, k);
//         for (auto i : ans) cout << i << " ";
//         cout << "\n";
//     }
//     return 0;
// }

int main(){
 //  int qq[3]={1,0,1};
 //  int i=4,j=5;
int arr[4][5]= {{1, 2, 3, 4, 10}, 
              {5, 6, 7, 8, 10}, 
              {9, 1, 3, 4, 10}, 
              {1, 2, 3, 4, 10}};
    int n;
   int i=0;
   int j=1;
    n=(arr[i][j-1]+arr[i][j+1]+arr[i+1][j-1]+ arr[i+1][j] +arr[i+1][j+1]);
    cout<<n;
        


    return 0;
}