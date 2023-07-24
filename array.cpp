#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[100];
    int i = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
    int max = INT_MIN;
    // INT_MIN is the negative ifinite value
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "\n"
         << "MAXIMUM IS " << max;

    return 0;
}
