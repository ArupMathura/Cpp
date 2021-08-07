#include<iostream>
using namespace std;

struct complex
{
    int real, imag;
};

// TODO: operator is a keyword 

complex operator +(complex c1, complex c2)
{
    complex t;
    t.real = c1.real + c2.real;
    t.imag = c1.imag + c2.imag;
    return t;
}

int main(){
    complex c1, c2, c;
    c1.real = 2; c1.imag = 3;
    c2.real = 3; c2.imag = 5;
    c = c1 + c2;
    // c = add(c1, c2);
    cout<<c.real<<" + i"<<c.imag;
    return 0;
}

// TODO: the operator can't be overloaded are -
    // 1)  .(dot)
    // 2)  ::(scope resulation)
    // 3)  ?
    // 4)  :
