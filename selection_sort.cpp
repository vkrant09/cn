#include <iostream>
using namespace std;

void selection_sort(int array[], int size)
{

    for (int i = 0; i < size; i++)

    {
        int min = array[i], minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                minIndex = j;
            }
        }
        // SWAP
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Unsorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    selection_sort(array, n);
    cout << "\nSorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}