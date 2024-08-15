#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int diff;
    int kk=15;
    int size;
    for(int i=0;i<n;i++){
        int sum = 0;

        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                cout<<arr[k]<<" ";
                diff = j - i;
                sum+=arr[k];
                if (sum == kk)
                {
                    size = max(j-i, size);
                }
            }
            
            cout <<endl;
        }
        cout<<"DIff"<<diff;
    }


    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<size;
}