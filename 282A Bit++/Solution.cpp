#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r = 0, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string str1 = "X++", str2 = "++X", str3 = "X--", str4 = "--X";
        string compare;
        cin >> compare;
        if (compare == str1 || compare == str2)
            r++;
        if (compare == str3 || compare == str4)
            r--;
    }
    cout << r;
}