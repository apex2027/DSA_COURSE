#include<iostream>
#include<deque>
using namespace std;
//STL 
int main()
{
    deque <int> d ;
    d.push_back(4);
    d.push_back(3);
    d.push_front(2);
    d.push_front(1);

    cout<<"afer elements added :"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    cout<<"afer elements delete :"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd positon ;"<<d.at(2)<<endl;

}       