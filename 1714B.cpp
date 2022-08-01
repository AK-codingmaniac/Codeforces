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
        vector<int> arr(n);
        for(auto &x:arr)
        {
            cin>>x;
        }
        set<int> st;
        reverse(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(st.find(arr[i])==st.end())
            {
                st.insert(arr[i]);
            }
            else
            {
                break;
            }
            ans++;
        }
        cout<<n-ans<<endl;
        T--;
    }
    return 0;
}