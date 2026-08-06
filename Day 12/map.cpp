#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int , string> m;
    m[1]="saurav";
    m[2]="ram";
    m[8]="joy";
    m[12]="aamm";

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    m.insert({5,"gone"});

    cout<<"Before Erase: "<<endl;
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    m.erase(12);
    cout<<"after Erase: "<<endl;
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 12 :"<<m.count(5)<<endl;

    auto it = m.find(2);
    for(auto i = it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
}
