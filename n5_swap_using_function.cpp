#include<iostream>
using namespace std;
struct abc
{
    int x;
    int y;
};

void swap(abc &s){
    int t;
    t = s.x;
    s.x = s.y;
    s.y = t;
}

int main(){
    abc s1;
    s1.x = 5;
    s1.y = 6;
    cout<<"Before swapping : x = "<<s1.x<<" and y = "<<s1.y<<endl;
    swap(s1);
    cout<<"After swapping : x = "<<s1.x<<" and y = "<<s1.y<<endl;
    return 0;
}