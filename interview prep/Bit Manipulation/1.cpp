#include "bits/stdc++.h"
using namespace std;

int getLen(int num)
{
    int len = 0;
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

int reverseDigit(int num)
{
    int rev = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }

    return rev;
}
int main()
{

int i=3;
do
{
    /* code */
    cout<<i+3<<" ";
    i--;
} while (/* condition */i!=0);

}