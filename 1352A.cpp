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
        vector<int> res;
        int a = 1;
        while(n>0)
        {
            if(n % 10 > 0)
            {
                res.push_back((n % 10) * a);
            }
            n = n / 10;
            a = a * 10;
        }
        cout<<res.size()<<endl;
        for(auto i : res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        T--;
    }
    return 0;
}