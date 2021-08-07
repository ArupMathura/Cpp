#include<iostream>
#include<climits>
using namespace std;
/*      find max and minimum number

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0],min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<"  "<<min;
    
    return 0;
}

*/

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        mx = max(mx, a[i]);
        cout << mx << endl;
    }
    return 0;
}