/*
#include<iostream>
using namespace std;

int fun(int &x)
{
	return x;
}
int main()
{
    int x = 10;
	cout << fun(x);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

int &fun()
{
	static int x = 10;
	return x;
}
int main()
{
	fun() = 30;
	cout << fun();
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main(){
	int a=2, b=4;
	swap(a, b);
	cout<<a<<" "<<b<<endl;
	
}
*/

