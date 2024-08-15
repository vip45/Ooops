#include "iostream"
using namespace std;

class Animal
{

    // state or properties
    private:
    int weight;
public:
    int age;
    string name;

    // behaviors or methods
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight=w;
    }
};

int main(int argc, const char **argv)
{

    Animal ramesh;

    ramesh.age = 12;
    ramesh.name = "Lion";

    cout << "Age of ramesh : " << ramesh.age << endl;
    cout << "Name of ramesh : " << ramesh.name << endl;
    ramesh.eat();
    ramesh.sleep();

    ramesh.setWeight(101);
    cout<<ramesh.getWeight()<<endl;

    return 0;
}