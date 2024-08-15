#include "iostream"
using namespace std;

int main(){

    int x = 6;
    int y = 5;
    x --;
    y = x - 3;
    for(int i = 0; i < 4; i++) { y++; }
    x + y;
    cout<<x<< " " <<y;
}