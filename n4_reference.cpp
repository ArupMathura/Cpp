#include<iostream>
using namespace std;
// TODO: first example
/*
int main()
{
    int i = 10;
    int &j = i;
    cout<<&i<<endl;
    cout<<&j<<endl;     // the &i and &j is same
    cout<<j;
    // cout<<endl<<"i = "<<i<<" "<<" j = "<<j;
    // j = 20;
    // cout<<endl<<"i = "<<i<<" "<<" j = "<<j;
    // i = 30;
    // cout<<endl<<"i = "<<i<<" "<<" j = "<<j;
    return 0;
}
*/

// TODO: Modify the passed parameters in a function
/*
void swap(int& first, int& second){
    int temp = first;
    first = second;
    second = temp;
}

int main(){
    int a = 2, b = 6;
    swap(a, b);
    cout<<a<<"  "<<b<<endl;
    return 0;
}
*/


// TODO: Avoiding a copy of large structures
/*
struct Student {
   string name;
   string address;
   int rollNo;
};

void print(const Student &s)
{
    cout << s.name << "  " << s.address << "  " << s.rollNo;
}

int main(){
    Student s = {"arup", "manua", 22};
    print(s);
    return 0;
}
*/



