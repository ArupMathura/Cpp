#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(){

        }
        complex(float r, float i){
            real = r;
            imag = i;
            cout<<real<<"  "<<imag<<endl;
        }
        void display(){
            cout<<"real = "<<real<<"  imag = "<<imag<<endl;
        }
        complex operator + (complex c){
            complex t;
            t.real = real + c.real;
            t.imag = imag + c.imag;
            return t;
        }
};

// when the operator+() is called, the object c2 is passed to it and is collected in the 
// object c. 
// as against this, the object c1 gets passed to it automatically.

int main(){
    complex c1(2.0, 3.0), c2(4.0, 5.0);
    // complex c3 = c1.add(c2);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}