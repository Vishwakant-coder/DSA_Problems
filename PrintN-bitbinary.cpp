#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> NBitBinary(int n) {
        int n_start = pow(2, n - 1);
        int n_end =  pow(2, n);
         vector< string> du;
         string temp1(n, '0');

        for (int i = n_start; i < n_end; i++) {
            temp1 = "";
            int num = i;
            int bit_1 = 0;
            int bit_0 = 0;
            int check = 0;

            while (num > 0) {
                int bit = num % 2;
                if (bit == 1) {
                    bit_1++;
                } else {
                    bit_0++;
                }
                temp1 = static_cast<char>('0' + bit) + temp1;
                num = num / 2;
            }

            for (size_t j = 0; j < temp1.size() - 2; ++j) {
                if (temp1[j] == '0' && temp1[j + 1] == '0') {
                    check = 1;
                    break;
                }
            }

            if (bit_1 >= bit_0 && !check) {
                du.push_back(temp1);
            }
        }
        reverse(du.begin(), du.end());
        return du;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        vector<string> ans = ob.NBitBinary(n);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
