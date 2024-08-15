// #include "iostream"
// using namespace std;

// bool isSortedAscending(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]<arr[i-1])
//         return false;
//     }

//     return true;
// }

// bool isSortedDescending(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[i-1])
//         return false;
//     }
//     return true;
// }

// int main()
// {
//     int arr[] = {392, 43, 32, 15, 4, 3, 2}; // Example descending array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if (isSortedAscending(arr, n))
//     {
//         cout << "The array is sorted in ascending order." << endl;
//     }
//     else if (isSortedDescending(arr, n))
//     {
//         cout << "The array is sorted in descending order." << endl;
//     }
//     else
//     {
//         cout << "The array is not sorted." << endl;
//     }

//     return 0;
// }


#include "iostream"
using namespace std;

bool isSorted(int arr[],int n){
    bool asc=true;
    bool dsc=true;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            asc=false;
        }
        if(arr[i]>arr[i-1]){
            dsc=false;
        }
        
    }

    return asc || dsc;
}

int main(){
    // int arr[] = {392, 43, 32, 15, 4, 3, 2}; 
    int arr[] = {1,1,1,1,1,1}; 
    
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }
}