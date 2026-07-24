#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no:";
    cin>>n;

    int a = 0;
    int b = 1;

    for (int i =1 ;i<n;i++)
    {
        int next = a+b;
        cout<<next<<" ";
        a = b;
        b = next;
    }

}