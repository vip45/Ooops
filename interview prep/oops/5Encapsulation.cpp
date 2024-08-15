#include "bits/stdc++.h"
using namespace std;

class Animal
{

    //this is full encapsulation
private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }

    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }

    int getWeight(){
        return this->weight;
    }

    void setWeight(int weight){
        this->weight=weight;
    }
};

int main()
{
    Animal a;
    a.setAge(22);
    a.setWeight(65);
    cout<<a.getAge()<<endl;
    cout<<a.getWeight()<<endl;

}