#include "iostream"
using namespace std;

class A{
    public:
    int bio;
};
class B{
    public:
    int bio;
};

class C: public A, public B{
    public:
    int maths;
};
int main(){
    C vipin;
    // vipin.physics=10;
    vipin.A::bio=120; //this is scope resolution
    vipin.maths=1660;
    cout<<vipin.maths<<endl;
    // cout<<vipin.physics<<endl;
    cout<<vipin.A::bio<<endl; // this is scope resolution
}