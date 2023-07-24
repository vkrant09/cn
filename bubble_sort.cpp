#include <iostream>
using namespace std;
void bubble_sort(int array[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (array[i] > array[i + 1])
            {
                // SWAP
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "ENTER SIZE OF THE ARRAY: " << endl;
    cin >> n;
    int array[100];
    cout << "ENTER ELEMENTS IN THE ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "UNSORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    bubble_sort(array, n);
    cout << "\nSORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
