#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(101);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ++arr[x];
    }
    cout<<*max_element(arr.begin(),arr.end())<<endl;
    return 0;
}