#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
     map<string, int> marksMap;
     marksMap["Shreya"] = 90;
     marksMap["Jack"] = 89;
     marksMap["Shiwang"] = 50;

     marksMap.insert({{"Khushi", 34},{"Ronak", 94}});
     map<string, int> :: iterator iter;
     for(iter = marksMap.begin(); iter != marksMap.end(); iter++)
     {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
     }

     cout<<"The size is: "<<marksMap.size()<<endl;
     cout<<"The max size is: "<<marksMap.max_size()<<endl;
     cout<<"The empty size is: "<<marksMap.empty()<<endl;

     return 0;
}