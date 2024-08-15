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

    // default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "Constructor Called" << endl;
    }

    // para constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Int Para Cons Called" << endl;
    }
    Animal(string type)
    {
        this->type = type;
        cout << "String Para Cons Called" << endl;
    }

    Animal (const Animal &obj1){
        this->age=obj1.age;
        cout<<"Copy"<<endl;
    }
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
        this->weight = weight;
    }
};

int main()
{

    // constructor
    Animal *b = new Animal();

    Animal a(100);

    
    Animal c(a);

    cout<<c.age<<endl;




    return 0;
}