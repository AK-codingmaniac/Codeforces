#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int x,y;
        cin>>x>>y;
        if((y - x) >= 2)
        {
            count++;
        }
        n--;
    }
    cout<<count<<endl;
    return 0;
}