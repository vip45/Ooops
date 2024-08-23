#include "bits/stdc++.h"
using namespace std;

class Maths
{
public:
    int sum(int a, int b)
    {
        cout<<"Im first"<<endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout<<"im second"<<endl;
        return a + b + c;
    }

    int sum(int a, float b)
    {
        cout<<"Im third"<<endl;
        return a + b ;
    }
};

int main()
{

    Maths obj;
    cout<<obj.sum(2,3.8f);


    return 0;
}