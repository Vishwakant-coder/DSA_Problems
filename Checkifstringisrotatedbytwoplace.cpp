#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int c1=0,c2=0;
       for (int i = 2; i < str1.size()-2; i++)
       {
                if(str1[i]==str2[i-2]){
                    c1++;
                }
                else if(str1[i-2]==str2[i]){
                    c2++;
                }
                else{
                    return 0;
                }
        }
                return 1;
       
       
       


    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}