// compile time polymorphism --> operator overloading

#include<iostream>
using namespace std;

class Complex{
    private:
    int real, imag;
    public:
        Complex(){

        }
        Complex(int r, int i){
            real=r;
            imag=i;
        }
        Complex operator + (const Complex &obj){
            // cout<<&obj<<endl;
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }
};

int main(){
    Complex c1(12, 7), c2(6, 7);
    Complex c3 = c1 + c2;
    // cout<<&c2<<endl;
    // cout<<&c1<<endl;
    c3.display();
    return 0;
}