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
        string str,ans;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i] == 'U')
            {
                ans = ans + 'D';
            }
            else if(str[i] == 'D')
            {
                ans = ans + 'U';
            }
            else
            {
                ans = ans + "LR";
                i++;
            }
        }
        cout<<ans<<endl;
        T--;
    }
    return 0;
}