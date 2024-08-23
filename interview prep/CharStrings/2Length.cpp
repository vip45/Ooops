#include "bits/stdc++.h"
using namespace std;

int getLen(char name[])
{
    int len = 0;
    int i = 0;
    while (name[i] != NULL)
    {
        len++;
        i++;
    }

    return len;
}

void rev(char name[])
{
    int i = 0;
    int j = getLen(name) - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void rep(char sen[])
{
    int i = 0;
}
int main()
{
    char name[100];
    cin >> name;
    cout << "Len : " << getLen(name) << endl;

    cout << name << endl;
    rev(name);
    cout << name << endl;

    
    cout << "LEn : " << getLen(name) << endl;
    cout<<"STrlen : "<<strlen(name)<<endl;
}