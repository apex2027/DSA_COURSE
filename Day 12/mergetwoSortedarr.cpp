#include<iostream>
#include<algorithm>

using namespace std;

void merge(int a1[],int n,int a2[],int m,int a3[])
{
    int i =0,j=0;
    int k = 0;
    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
            a3[k]=a1[i];
            k++;
            i++;
        }
        else{
            a3[k]=a2[j];
            k++;
            j++;
        }
    }

    //to copy element from first arr
    while(i<n)
    {
        a3[k]=a1[i];
            k++;
            i++;
    }

    //to copy element from second arr
    while(i<n)
    {
        a3[k]=a2[j];
            k++;
            j++;
    }
}

void print(int a3[],int n)
{
    for(int i= 0;i<n;i++)
    {
        cout<<a3[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a1[5]={1,4,5,8,9};
    int a2[3]={2,3,7};

    int a3[8]={0};

    merge(a1,5,a2,3,a3);
    print(a3,8);
}
