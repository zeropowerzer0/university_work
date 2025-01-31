
// #include <iostream>
// #include <vector>
// using namespace std;

// void magic_square(int n)
// {
//     if (n < 3 || n % 2 == 0) // Ensure n is odd and >= 3
//     {
//         cout << "Magic square is only possible for odd integers >= 3." << endl;
//         return;
//     }

//     // Initialize a 2D array with all elements as 0
//     vector<vector<int>> arr(n, vector<int>(n, 0));

//     int i = n / 2; // Starting row
//     int j = n - 1; // Starting column

//     for (int k = 1; k <= n * n; k++)
//     {
//         arr[i][j] = k; // Place the number in the cell
//         i--;           // Move up
//         j++;           // Move right

//         // Case 1: If both i and j go out of bounds
//         if (i == -1 && j == n)
//         {
//             i = 0;
//             j = n - 2;
//         }

//         // Case 2: If i goes out of bounds (top row)
//         if (i == -1)
//             i = n - 1;

//         // Case 3: If j goes out of bounds (rightmost column)
//         if (j == n)
//             j = 0;

//         // Case 4: If the cell is already filled
//         if (arr[i][j] != 0)
//         {
//             i += 1; // Move down
//             j -= 2; // Move left twice
//         }
//     }

//     // Print the magic square
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter an odd number greater than or equal to 3: ";
//     cin >> n;

//     magic_square(n);

//     return 0;
// }


#include <iostream>
#include<vector>
using namespace std;

void magic_square(int n)
{
    int arr[n][n];
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] =0;
        }
        cout << endl;
    }
    // vector<vector<int>> arr(n, vector<int>(n, 0));

    
    int i = n / 2;
    int j = n - 1;

    int k=1;

    while(k<=n*n)
    {
        arr[i][j] = k++;
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