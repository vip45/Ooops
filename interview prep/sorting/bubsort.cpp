#include "iostream"
using namespace std;

void bubsort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                swapped= true;
            }
        }

        if(!swapped) break;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11, 544, 0, 985, 52, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array : " << n << endl;

    bubsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}