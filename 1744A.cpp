#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string str;
        cin>>str;
        map<int,set<char>> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].insert(str[i]);
        }
        int f=1;
        for(auto it:mp)
        {
            if(it.second.size()>1)
            f=0;
        }
        if(f==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        T--;
    }
    return 0;
}