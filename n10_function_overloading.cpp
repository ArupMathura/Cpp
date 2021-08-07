#include<iostream>
using namespace std;

void print(int x = 10, int y = 20, int z = 30){
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
}

int main(){
    print();
    print(100);
    print(100, 200);
    print(100, 200, 300);
    return 0;
}