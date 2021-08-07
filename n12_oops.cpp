#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }

    // TODO:parameterised constructor
    student(string s, int a, bool g){   
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // TODO: copy constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void printInfo(){
        cout<<"The output will be : "<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

    bool operator == (student &a){      
// here we use bool because we need the output as true or false, it is the return type
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }

};

int main(){
    // student arr[3];
    // for(int i=0;i<1;i++){
    //     cout<<"Name : ";
    //     cin>>arr[i].name;
    //     cout<<"Age : ";
    //     cin>>arr[i].age;
    //     cout<<"Gender : ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<1;i++){
    //     arr[i].printInfo();
    // }
    student a("raju", 88, 1);
    // a.printInfo();
    student b;
    student c = a;
    
    // TODO: Operator overloading 
    if (a == a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not sames"<<endl;
    }
    return 0;
}