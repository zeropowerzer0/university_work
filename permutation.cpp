#include <iostream>
#include<string>
using namespace std;


void pre(string str, int k, int n)
{
    if (k == n)
    {
        cout << str << endl;
        return;
    }
    else
    {
        for (int i = k; i <= n; i++)
        {
            swap(str[k], str[i]);
            pre(str, k + 1, n);
            swap(str[k], str[i]);
        }
    }
}

int main()
{
    string a;
    cout << "enter string : ";
    cin >> a;
    int n;
    n = a.length();

    pre(a, 0, n-1);
    

    // pre("ab",0,1);

    return 0;
}