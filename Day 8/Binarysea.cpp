#include<iostream>
using namespace std;

int Binary(int arr[],int n,int key)
{
    int st=0;
    int end=n-1;
    int mid=st+(end-st)/2;

    while(st<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid])
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return -1;
}

int main()
{
    int arr[5]={2,6,8,9,12};

    int index=Binary(arr,5,9);
    cout<<"The Index no of 9 is:"<<index<<endl;
}