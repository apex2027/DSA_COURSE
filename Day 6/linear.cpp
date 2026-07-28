#include<iostream>
using namespace std;

bool search(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;    
}
int main()
{
    int n;
    cout<<"Enter the size :";
    cin>>n;

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to find:";
    cin>>key;

    bool f=search(arr,n,key);
    
    if( f )
    {
        cout<<"element present "<<endl;
    }
    else
    {
        cout<<"element not:"<<endl;
    }
    
}