#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for(int i = 0; i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    for(int i = 1; i<arr.size(); i++)
    {
        ans = ans^i;
    }
   // cout<<ans;
    return ans;
}

int main()
{
    vector<int> v = {1, 3, 4, 3, 6, 7};
   
    /*for(int i = 0; i<v.size(); i++)
    {
        cin>>v[i];
    }*/

    int val = findDuplicate(v);
    cout<<val<<endl;
    return 0;
}

