#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 3;
    int m[row][col] = {{6, 5, 4},
                       {1, 2, 5},
                       {7, 9, 7}};
    int suml = 0, sumu = 0;
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sumu = sumu + m[i][j];
                suml = suml + m[i][j];
            }
            if (i < j)
            {
                sumu = sumu + m[i][j];
            }
            if (i > j)
            {
                suml = suml + m[i][j];
            }
        }
    }
    cout << sumu << suml;
    return 0;
}