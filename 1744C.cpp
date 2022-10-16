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
        char ch;
        cin>>ch;
        string str;
        vector<int> v;
        int ans = INT_MIN;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='g')
            {
                v.push_back(i);
            }
        }
        v.push_back(v[0]+n);
        for(int i=0;i<n;i++)
        {
            if(str[i] == ch)
            {
                int l = *lower_bound(v.begin(),v.end(),i);
                ans = max(ans,l-i);
            }
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}