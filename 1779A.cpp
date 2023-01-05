#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(str.substr(i,2) == "RL")
        {
            cout<<"0"<<endl;
            return;
        }
        if(str.substr(i,2) == "LR")
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        solution();
        T--;
    }
    return 0;
}