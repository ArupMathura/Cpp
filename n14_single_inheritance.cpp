#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"single inheritance"<<endl;
    }
};

class B: public A{
    public:
    void func1(){
        cout<<"class B"<<endl;
    }
};

int main(){
    B b;
    b.func();
    b.func1();
    return 0;
}
