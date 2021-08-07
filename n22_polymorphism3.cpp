#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"This is a base class's print function"<<endl;
    }
    void display(){
        cout<<"This is a base class's display function"<<endl;
    }
};

class derive: public base{
    public:
    void print(){
        cout<<"This is a derived class's print function"<<endl;
    }
    void display(){
        cout<<"This is a derived class's display function"<<endl;
    }
};

int main(){
    base *baseptr;
    derive d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();
    return 0;
}