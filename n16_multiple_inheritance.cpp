#include<iostream>
using namespace std;

class A{
    public:
    void afunc(){
        cout<<"print function a"<<endl;
    }
};

class B{
    public:
    void bfunc(){
        cout<<"print function b"<<endl;
    }
};

class C: public A, public B{
    public:
};

int main(){
    C c;
    c.afunc();
    return 0;
}