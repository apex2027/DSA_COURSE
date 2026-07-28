#include<iostream>
using namespace std;

void arrprint(int arr[10],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int a[3]= {1,2,3};
    cout<<a[0]<<endl;

    int b[5]={5,6,7,4,2};
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int arr[10]={1,23,4,5,67,43,8,3,22,90};

    arrprint(arr,10);



}
