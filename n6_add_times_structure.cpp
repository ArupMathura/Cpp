#include<iostream>
using namespace std;

struct time
{
    int h, m;
};

void add(struct time &t1, struct time &t2)
{
    t1.m = t1.m + t2.m;
    t1.h = t1.h + t2.h + (t1.m / 60);
    t1.m = t1.m % 60;
}

int main(){
    struct time t1, t2;
    t1.h = 2;
    t1.m = 20;
    t2.h = 3;
    t2.m = 10;
    add(t1, t2);
    cout<<t1.h<<"hrs  "<<t1.m<<"min";
    return 0;
    
}
