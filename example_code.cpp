#include <iostream>
#include<vector>
using namespace std;

void magic_square(int n)
{
    // int arr[n][n] = {0};
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int i = n / 2;
    int j = n - 1;

    for (int k = 1; k <= n * n; k++)
    {
        arr[i][j] = k;
        cout<<k <<" At "<< i <<" "<<j<<"\n";
        i--;
        j++;
        
        if (i == -1 && j == n)
        {
            i = 0;
            j = n - 2;
        }

        if (i == -1)
        {
            i = n - 1;
        }

        if (j == n)
        {
            j = 0;
        }

        if (arr[i][j] != 0)
        { 
            i++;
            j = j - 2;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    magic_square(n);

    return 0;
}
