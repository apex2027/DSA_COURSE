#include<iostream>
#include<algorithm>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];  
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {            
                //shift
                arr[j+1] = arr[j];
            }
            else //ruko
            {
                break;
            }
        }
        arr[j+1]=temp;
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
    insertion(arr,6);
    cout<<"sorted array :";
    printarr(arr,6);

}