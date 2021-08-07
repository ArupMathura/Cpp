// Compile time polymorphism --> function overloading

#include<iostream>
using namespace std;

class functionOverload{
    public:
    void fun(){
        cout<<"this is a function with no argument"<<endl;
    }
    void fun(int x){
        cout<<"this is a function with an integer argument"<<endl;
    }
    void fun(double x){
        cout<<"this is a function with a double argument"<<endl;
    }
};

int main(){
    functionOverload obj;
    obj.fun();
    return 0;
}