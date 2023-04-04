#include<bits/stdc++.h>
using namespace std;

int calc(int n,int x,int y)
{
    x--;
    y--;
    x = min(x,n-x-1);
    y = min(y,n-y-1);
    return min(x,y);
}
void solve(int n,int x1,int x2,int y1,int y2)
{
    cout<<abs(calc(n,x1,y1)-calc(n,x2,y2))<<endl;
}
int main()
{
    long long T;
    cin>>T;
    while(T>0)
    {
        int n,x1,x2,y1,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        solve(n,x1,x2,y1,y2);
        T--;
    }
    return 0;
}