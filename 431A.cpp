#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    for(int i=1;i<=4;i++)
    {
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        ans += arr[str[i]-'0'];
    }
    cout<<ans<<endl;
    return 0;
}