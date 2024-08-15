#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main()
{
    // int arr[] = {392, 32, 43, 2, 15, 4, 31, 3};
    int arr[] = {1,1,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2)
    {
        cout << "Array must have at least two elements." << endl;
        return -1;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "There is no distinct second maximum element." << endl;
        second=first;
        
    }
    // else
    {
        cout << "The largest element is: " << first << endl;
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}
