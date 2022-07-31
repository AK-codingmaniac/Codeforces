#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;++i)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(arr[n+i] - arr[i] < x)
            {
                flag = false;
            }
        }
        cout<<(flag ? "YES" : "NO")<<"\n";
        T--;
    }
    return 0;
}