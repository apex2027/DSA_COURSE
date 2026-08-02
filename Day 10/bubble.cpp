#include<iostream>
#include<algorithm>
using namespace std;

void bubble(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        
        for(int j = 0;j<n-1;j++)
        {
            if(arr[j] >arr[j+1])
            {            
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarr(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {6,4,3,5,1,2};
    cout<<"Original array :";
    printarr(arr,6);

    cout<<endl;
    bubble(arr,6);
    cout<<"sorted array :";
    printarr(arr,6);

}