#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        long long x = n;
        vector<long long> vt;
        set<long long> st;
        map<long long,long long> mp;
        for(long long i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            vt.push_back(a);
            st.insert(a);
            mp[a] = mp[a] + 1;
        }
        vt.assign(st.begin(),st.end());
        for(long long i=0;i<vt.size();i++)
        {
            n = n - (mp[vt[i]]-1);
        }
        if((x - n) % 2 == 1)
        {
            n = n - 1;
        }
        cout<<n<<endl;
        T--;
    }
    return 0;
}