#include "iostream"
using namespace std;

int funn(int a,int b){
    if(a>0){

    if(b>0){
    return a+b+funn(a+1,0)+funn(a+2,0)+funn(a+3,0);
}
}
    return a+b;
}

int main(){
    cout<<funn(2,6);
}