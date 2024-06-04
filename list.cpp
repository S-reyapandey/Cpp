#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(9);

    //list<int> :: iterator iter;
    //iter = list1.begin();
    //cout<<*iter<<" ";
    //iter++;
    //cout<<*iter<<" ";
    //iter++;
    //cout<<*iter<<" ";
    //iter++;

    //for sorting list
    list1.sort();
    display(list1);
   // list1.pop_back();
    //display(list1);

    //for reversing list
    list1.reverse();
    display(list1);

    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 34;
    iter++;
    *iter = 21;
    iter++;
    *iter = 1;
    iter++;
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);
    return 0;
}