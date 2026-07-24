#include<iostream>
using namespace std;

int main()
{
    // int a= 4;
    // int b= 6;

    // cout<<"a&b :"<<(a&b)<<endl;   //AND
    // cout<<"a|b :"<<(a&b)<<endl;   //OR
    // cout<<"~a  :"<<(a&b)<<endl;   //NOT
    // cout<<"a^b :"<<(a&b)<<endl;    //XOR

    int i = 5;
    cout<<(i++)<<endl;
    //i = 6
    cout<<(++i)<<endl;
    // i = 7 / 7
    cout<<(i--)<<endl;
    // i = 7 / 6
    cout<<(--i)<<endl;
    // i = 5 / 5

    for (int x= 0, y=1;x>=0 && y>=1;x--,y--)
    {
        cout<<x<<" "<<y<<endl;
    }
}