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
        Complex add(Complex c2){
           
            Complex t;
            t.real = real+c2.real;
            t.imag = imag+c2.imag;
            return t;
        }

        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }
};

int main(){
    Complex c1(12, 7), c2(6, 7);
    Complex c3;
    c3.add(c2);
    
    c3.display();
    return 0;
}