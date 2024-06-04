#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    //Function Objects(Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 23, 32, 45, 28, 10, 70 };
    sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());//descending order sorting
    for(int i = 0; i<7;i++)
    {
         cout<<arr[i]<<endl;;
    }
    return 0;
}