#include<iostream>
using namespace std;

void sortone(int arr[],int n)
{
    int left =0;
    int right = n-1;

    while (left < right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }

        while(arr[right]==1 && left<right)
        {
            right--;
        }

        //if(arr[left]==1 && arr[right==0])
        if (left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
}

void printarr(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[8]={1,1,0,0,1,1,1,0};

    sortone(arr,8);
    printarr(arr,8);
}