#include<bits/stdc++.h>
using namespace std;

int solve(int x,int y,int z)
{
    return max(0,max(y,z) + 1 - x);
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<" "<<solve(b,a,c)<<" "<<solve(c,a,b)<<endl;
        T--;
    }    
    return 0;
}