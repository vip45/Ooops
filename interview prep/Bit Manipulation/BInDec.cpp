#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =13;
    int sum=0;
    
    int x=123;

    int siz=0;
    int temp = x;
    while(temp!=0){
        
        temp/=10;
        siz++;
    }
    cout << "Size of siz " << siz << endl;
    int rev=0;
    int temp2;
    while(x!=0){
        int rem = x%10;
        rev = rev*10+rem;
        x/=10;
    }

    cout<<"The reverse  : "<<rev<<endl;
    cout<<x<<endl;

    cout<<n;
}