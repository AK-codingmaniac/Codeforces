#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
        cin>>n;
        string str;
        cin>>str;
        for(char c='A';c<='Z';c++)
        {
            int first = n;
            int last = -1;
            for(int i=0;i<n;i++)
            {
                if(str[i] == c)
                {
                    first = min(first,i);
                    last = max(last,i);
                }
            }
            for(int i=first;i<=last;i++)
            {
                if(str[i] != c)
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        solve();
        T--;
    }
    return 0;
}