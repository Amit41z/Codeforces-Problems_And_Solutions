#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n, m, a;
    long long b, c, f;
    cin >> n;
    cin >> m;
    cin >> a;
    b = ceil(m / a);
    c = ceil(n / a);
    f = b * c;
    cout << f << endl;
    return 0;
}