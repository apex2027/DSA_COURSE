#include<iostream>
#include<algorithm>
using namespace std;

// void intersect(int arr1[], int n, int arr2[], int m) 
// {
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++) 
//         {
//             if (element == arr2[j]) 
//             {
//                 cout << element << endl;
//                 break;
//             }
//         }
//     }
// }

void intersect(int arr1[], int n, int arr2[], int m) 
{
    int i=0,j=0;
    sort(arr1,arr1 + n);
    sort(arr2,arr2 + m);

    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main() {
    int arr1[3] = {1, 2, 3};
    int arr2[2] = {7, 3};
    intersect(arr1, 3, arr2, 2);
    return 0;
}   