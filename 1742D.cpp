//It is getting TLE on Test Case 4 :(
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

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
        int msum = -1;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(__gcd(arr[i],arr[j])==1)
                {
                    msum = max(msum,i+j+2);
                }
            }
        }
        cout<<msum<<endl;
        T--;
    }
    return 0;
}