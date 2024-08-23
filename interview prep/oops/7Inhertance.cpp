#include "bits/stdc++.h"
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal{

};
int main(){
    Dog a;
    cout<<sizeof(a)<<endl;
    a.eat();
}