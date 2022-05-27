#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b;
        cin>>a>>b;
        int side = min(max(2*b,a),max(2*a,b));
        cout<<side*side<<endl;
        T--;
    }
    return 0;
}