#include<iostream>
#include<vector>
using namespace std;
//STL 
int main()
{
    vector <int> v ;
     cout<<"Capacity :"<<v.capacity()<<endl;

     v.push_back(1);
     cout<<"capacity after added element : "<<v.capacity()<<endl;

    v.push_back(2);
         cout<<"capacity after added element : "<<v.capacity()<<endl;

    v.push_back(3);
     cout<<"capacity after added element : "<<v.capacity()<<endl;

     v.push_back(32);
     cout<<"capacity after added element : "<<v.capacity()<<endl;
     cout<<"size after added element : "<<v.size()<<endl;

    v.push_back(12);
         cout<<"capacity after added element : "<<v.capacity()<<endl;
         cout<<"size after added element : "<<v.size()<<endl;

    cout<<"Element at 2nd positon ;"<<v.at(2)<<endl;

    cout<<"1st :"<<v.front()<<endl;
    cout<<"last :"<<v.back()<<endl;

    v.pop_back();
    cout<<"After pop :"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector <int> ve(5,8);
    for(int i:ve)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //copy from vector
    vector <int> last(ve);
    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}       
