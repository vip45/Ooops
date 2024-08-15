#include "iostream"
using namespace std;

class Animal
{

    // state or properties
private:
    int weight;

public:
    int age;
    string type;

    // behaviors or methods
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight=weight;
    }
};

int main(int argc, const char **argv)
{

    // Dynamic Memory;

    Animal *suresh = new Animal;

    (*suresh).age = 15;
    (*suresh).type = "billi";

    cout << (*suresh).age << endl;
    cout << (*suresh).type << endl;

    (*suresh).eat();
    (*suresh).sleep();

    Animal *ramesh = new Animal;

    ramesh->age = 17;
    ramesh->type = "kutta";

    cout << ramesh->age << endl;
    cout << ramesh->type << endl;

    ramesh->eat();
    ramesh->sleep();

    return 0;
}