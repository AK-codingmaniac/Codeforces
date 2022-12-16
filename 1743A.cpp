#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int rem = 10 - n;
        int frem = factorial(rem);
        int ans = (frem * factorial(frem-2) * 6)/2;
        cout<<ans<<endl;
        T--;
    }
    return 0;
}