#include <bits/stdc++.h>

using namespace std;

void ans()
{
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        b--;
        if (b >= 30)
        {
            cout << "NO" << endl;
            continue;
        }
        int m = pow(2, b);
        if (c >= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}