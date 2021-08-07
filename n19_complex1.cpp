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
        complex add(complex c2){
            complex t;
            t.real = real + c2.real;
            t.imag = imag + c2.imag;
            return t;
        }
};

int main(){
    complex c1(2.0, 3.0), c2(4.0, 5.0);
    complex c3 = c1.add(c2);
    c3.display();
    return 0;
}