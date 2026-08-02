#include<iostream>
#include<algorithm>
using namespace std;

void selection(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int minIndex= i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]< arr[minIndex])
            {            
                minIndex =  j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    selection(arr,6);
    cout<<"sorted array :";
    printarr(arr,6);

}