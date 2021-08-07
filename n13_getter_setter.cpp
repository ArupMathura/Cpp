#include<iostream>
using namespace std;
class rectangle{
    private:
    int len, br;
    public:
    void getdata(){
        cout<<"Enter the length and breadth : ";
        cin>>len>>br;
    }
    void setdata(int l, int b){
        len = l;
        br = b;
    }
    void displaydata(){
        cout<<"length : "<<len<<endl;
        cout<<"breadth : "<<br<<endl;
    }
    void area_peri(){
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout<<"area : "<<a<<endl;
        cout<<"perimeter : "<<p<<endl;
    }
};


int main(){
    rectangle r1, r2;
    r1.getdata();
    r1.displaydata();
    r1.area_peri();

    r2.setdata(4, 3);
    r2.displaydata();
    r2.area_peri();

    return 0;
}