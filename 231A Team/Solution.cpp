#include <iostream>
using namespace std;
int main()
{
    int n, i, p, v, t, c = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> p;
        cin >> v;
        cin >> t;
        if ((p + v + t) >= 2)
        {
            c++;
        }
    }
    cout << c;
}