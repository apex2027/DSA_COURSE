#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    cout<<"finding 13->"<<binary_search(v.begin(), v.end(), 13)<<endl;

    int a = 5;
    int b = 8;
    cout<<"max ->"<<max(a,b)<<endl;
    cout<<"min ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a =>"<<a<<endl;
    
    string s = "abvdef";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate :";
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


}