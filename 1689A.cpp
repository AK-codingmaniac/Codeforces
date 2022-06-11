#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        int c1=0,c2=0;
        string ans;
        while((i < a.size()) && (j < b.size()))
        {
            if(a[i] <= b[j])
            {
                if(c1 < k)
                {
                    ans = ans + a[i];
                    i++;
                    c1++;
                    c2 = 0;
                }
                else
                {
                    ans = ans + b[j];
                    j++;
                    c2 = 1;
                    c1 = 0;
                }
            }
            else
            {
                if(c2 < k)
                {
                    ans = ans + b[j];
                    j++;
                    c2++;
                    c1=0;
                }
                else
                {
                    ans = ans + a[i];
                    i++;
                    c1 = 1;
                    c2 = 0;
                }
            }
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}