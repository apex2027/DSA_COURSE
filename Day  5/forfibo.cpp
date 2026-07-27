#include <iostream>
using namespace std;

void fibo(int n)
{
    int a=0;
    int b=1;

    for(int i = 0;i<n;i++)
    {

        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}

int main()
{
    int n;
    cin>>n;
    fibo(n);
}