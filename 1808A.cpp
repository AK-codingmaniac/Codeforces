#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int l,r;
        cin>>l>>r;
        int res=l,md=0,n=l;
        vector<int> ans;
        for(int i=0;i<6;i++)
        {
            ans.push_back(n%10);
            n = n / 10;
            if(n==0)
            break;
        }
        sort(ans.begin(),ans.end());
        md = ans[ans.size()-1]-ans[0];
        int temp=111;
        for(int i=l+1;i<=r;i++)
        {
            temp--;
            int diff=0;
            n=i;
            vector<int> a;
            for(int j=0;j<6;j++)
            {
                a.push_back(n%10);
                n = n / 10;
                if(n==0)
                break;
            }
            sort(a.begin(),a.end());
            diff = a[a.size()-1]-a[0];
            if(diff>md)
            {
                md = diff;
                res = i;
            }
            if(temp==0)
            break;
        }
        cout<<res<<endl;
        T--;
    }
    return 0;
}