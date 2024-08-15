#include "bits/stdc++.h"
using namespace std;

class Animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;

    Animal(){

        this->weight=0;
        this->age=0;
        this->type="";

        cout<<"Constructor called"<<endl;
    }

    Animal (int age){
        this->age=age;
        cout<<"Parametirized con called "<<age<<endl;
    }

    Animal (int age,int weight){
        this->age=age;
        this->weight=weight;

        cout<<"2";
    }

    //copy cons
    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->type=obj.type;

        cout<<"Im am inside copy cons"<<endl;
    }
    //behaviors ,

    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){

        cout<<"Sleeping"<<endl;

    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

int main(){
    
    // Animal ramesh;

    // ramesh.age = 12;
    // ramesh.name = "Lion";

    // // cout<<sizeof(ramesh)<<endl;
    // cout<<"Age of ramesh : "<<ramesh.age<<endl;
    // cout<<"Name of ramesh : "<<ramesh.name<<endl;

    // ramesh.eat();
    // ramesh.sleep();

    // ramesh.setWeight(101);
    // cout<<ramesh.getWeight()<<endl;


    // dynamic object creation

    
    // Animal * suresh = new Animal;

    // (*suresh).age=17;


    // suresh->age = 20;
    // suresh->eat();


    Animal * ramesh = new Animal();
    Animal * vipin(ramesh);



}