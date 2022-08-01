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
        string str;
        int digit = 9;
        while(n)
        {
            while(n<digit)
            digit--;
            str += char('0'+digit);
            n -= digit;
            digit--;
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}