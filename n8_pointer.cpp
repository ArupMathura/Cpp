#include<iostream>
using namespace std;
// int main(){
// TODO: POINTER AND ARRAY
    // int arr[] = {10, 20, 30};
    // cout<< *arr<<endl;    // it will print the first value of the array i.e. 10

    // int *ptr = arr;
    // cout<<*ptr;         //10

    // for(int i=0;i<3;i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }

    // for(int i=0;i<3;i++){
    //     cout<<*(arr+i)<<endl;
// TODO: here arr is an indexing pointer, when we do (arr+i) then it goes to next index
    // }


// TODO: pointer to pointer 
/*
    int a = 10;
    int *p = &a;
    // p = &a;
    cout<<*p<<endl;
    int **q = &p;
    cout<<*q<<endl;
    cout<<**q<<endl;
*/
//     return 0;
// }


void swap(int *a, int *b){
    cout<<"*a = "<<*a<<endl;
    cout<<"*b = "<<*b<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int a = 2, b = 4;
    // int *aptr = &a;
    // int *bptr = &b;
    // cout<<"aptr = "<<aptr<<endl;
    // cout<<"bptr = "<<bptr<<endl;
    // cout<<"*aptr = "<<*aptr<<endl;
    // cout<<"*bptr = "<<*bptr<<endl;
    // swap(*aptr, *bptr);
    swap(a, b);
    cout<<a<<"  "<<b;
    return 0;
}