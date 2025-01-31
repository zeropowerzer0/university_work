#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<vector<char>> mat;

   int n;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      for(int j =0; j<n; j++)
      {
         mat[i][j]='-';
      }
   }

   for (int i = 0; i < n; i++)
   {
      for(int j =0; j<n; j++)
      {
         cout<<mat[i][j];
      }
   }
   return 0;
}