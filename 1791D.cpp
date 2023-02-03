#include<bits/stdc++.h>
using namespace std;

long long countUnique(string str)
{
    map<char,int> mp;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    long long ans=0;
    for(auto it:mp)
    {
        if(it.second == 1)
        ans++;
    }
    return ans;
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        long long n;
        cin>>n;
        string str;
        cin>>str;
        long long i=0,j=n-1;
        vector<long long> v;
        while(i < j)
        {
            long long ls1 = countUnique(str.substr(0,i));
            long long ls2 = countUnique(str.substr(i+1,j));
            long long sum = ls1+ls2;
            v.push_back(sum);
            i++;
            j--;
        }
        cout<<*max_element(v.begin(),v.end())+1<<endl;
        T--;
    }
    return 0;
}