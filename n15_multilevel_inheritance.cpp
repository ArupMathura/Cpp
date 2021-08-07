#include<iostream>
using namespace std;

class A{
    public:
    void afunc(){
        cout<<"print function a"<<endl;
    }
};

class B: public A{
    public:
    void bfunc(){
        cout<<"print function b"<<endl;
    }
};

class C: public B{
    public:
    void cfunc(){
        cout<<"print function c";
    }
};

int main(){
    C c;
    c.afunc();
    B b;
    b.afunc();
    return 0;
}