#include "bits/stdc++.h"
using namespace std;

class Fruit{
    public:
    string name;
};

class Mango:public Fruit{
    public:
    int weight;
};

class Alphonso:public Mango{
    public:
    int sugarLevel;
};

int main(){
    Alphonso m1;
    m1.name="Vipin";
    cout<<m1.name<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.sugarLevel<<endl;
}