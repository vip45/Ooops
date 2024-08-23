#include "bits/stdc++.h"
using namespace std;

class Car {

    public:
    string name;
    int weight;
    int age;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }

    void breakk(){
        cout<<"Break Done"<<endl;
    }
};

class Scorpio:public Car{
    
};
int main(){
    Scorpio v;
    v.speedUp();
}