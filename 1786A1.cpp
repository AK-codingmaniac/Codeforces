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
        int ca=0,cb=0;
        int i=1;
        while(n>0)
        {
            if(i%4==1 || i%4==0)
            {
                ca += min(i,n);
            }
            else
            {
                cb += min(i,n);
            }
            n -= i;
            i++;
        }
        cout<<ca<<" "<<cb<<endl;
        T--;
    }
    return 0;
}