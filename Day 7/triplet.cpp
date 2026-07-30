#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> triplet(vector<int> &arr, int s){
   vector <vector<int>> ans;
   for(int i =0;i<arr.size();i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
        for(int p=j+1;p<arr.size();p++)
        {
         if(arr[i]+arr[j]+arr[p]==s)
         {
            int a = arr[i], b = arr[j], c = arr[p];
                vector<int> temp;
               int mn = min({a, b, c});
               int mx = max({a, b, c});
               int mid = (a + b + c) - mn - mx; // Calculate the middle value

               temp.push_back(mn);
               temp.push_back(mid); // Add the missing middle element
               temp.push_back(mx);
               
               ans.push_back(temp);
          }
      }
   }
}
   sort(ans.begin(),ans.end());
   return ans;
}

int main()
{
    vector <int> arr={2,5,8,12,6,9};
    int target = 26;

    vector<vector<int>> ans=triplet(arr,target);
    cout<<"Pairs with sum :" <<target<<endl;

    for (const auto& triple : ans) {
    cout << "[" << triple[0] << ", " << triple[1] << ", " << triple[2] << "]" << endl;
    }
    
}