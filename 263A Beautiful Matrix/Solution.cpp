#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, a1[6][6], x, y, f;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a1[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a1[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    f = abs(x - 3) + abs(y - 3);
    cout << f;
    return 0;
}