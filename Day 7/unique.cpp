#include<iostream>
using namespace std;

int unique(int arr[],int n)
{
    int ans = 0;
    for(int i =0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[5];
    for(int i =0 ; i<5;i++)
    {
        cin>>arr[i];
    }

    int u = unique(arr,5);
    cout<<u<<endl;
}