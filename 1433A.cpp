#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        string str;
        cin>>str;
        int dig = str[0] - '0' - 1;
        int len = str.length();
        cout<<(dig*10)+(len*(len+1))/2<<endl;
        T--;
    }
    return 0;
}