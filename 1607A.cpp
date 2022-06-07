#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        map<char,int> index;
        string order,word;
        cin>>order>>word;
        int ans = 0;
        for(int i=0;i<26;i++)
        {
            index[order[i]] = i;
        }
        for(int i=1;i<word.length();i++)
        {
            ans = ans + abs(index[word[i]]-index[word[i-1]]);
        }
        cout<<ans<<endl;
        T--;    
    }
    return 0;
}