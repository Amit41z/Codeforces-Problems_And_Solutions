#include <iostream>
using namespace std;
int main()
{
    int k, i, c = 0, n;
    cin >> n >> k;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {

        if (a[i] >= a[k - 1] && a[i] != 0)
        {
            c++;
        }
    }
    cout << c;
}