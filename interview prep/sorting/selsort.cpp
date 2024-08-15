#include "bits/stdc++.h"
using namespace std;

void selsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        // swaping with the help of  3rd variable
        // if(min_index!=i){
        //     int temp = arr[i];
        //     arr[i]=arr[min_index];
        //     arr[min_index]=temp;
        // }

        // swaping with help of swap funtion
        // if(min_index!=i){
        //     swap(arr[min_index],arr[i]);
        // }
        // swaping with the help of XOR ^
        // if(min_index!=i){
        //     arr[i]=arr[i]^arr[min_index];
        //     arr[min_index]=arr[i]^arr[min_index];
        //     arr[i]=arr[i]^arr[min_index];
        // }
        if(min_index!=i){
            arr[i]=arr[i]+arr[min_index];
            arr[min_index]=arr[i]-arr[min_index];
            arr[i]=arr[i]-arr[min_index];
        }
    }
    
}

int main(){
    int arr[] = {64, 25, 12, 22, 11,544,0,985,52,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array : "<<n<<endl;
    selsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}