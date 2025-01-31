#include <iostream>
using namespace std;
int main()
{
   string a;
   cout << "enter string : ";
   cin >> a;
   int n;
   n = a.length();
   // cout << a[2];
   int i = 3;

   string newstr = a.substr(0, i) + a.substr(i , n -i);
   
   cout << newstr;

   return 0;
}