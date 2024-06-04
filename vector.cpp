#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }    
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of ur vector"<<endl;
    cin>>size;
    for(int i = 0; i<4; i++)
    {
        cout<<"Enter an element to add to this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    //vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,50, 456);//midle 50 indicate no of times elent inserted
    display(vec1);
    return 0;
}