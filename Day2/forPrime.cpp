#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no:";
    cin>>n;
    //prime means remainder not 0
    bool isPrime = 1;

    for(int i =2;i<n;i++)
    {
        //cout<<"Not a prime no";
        isPrime=0;
        break;
    }

    if(isPrime == 0)
    {
        cout<<"Not a prime No "<< endl;
    }
    else{
        cout<<"is Prime No"<<endl;
    }
}