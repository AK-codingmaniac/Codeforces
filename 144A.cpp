#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxn = 0;
    int minn = 101;
    int maxi,mini;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxn)
        {
            maxn = arr[i];
            maxi = i;
        }
        if(arr[i]<=minn)
        {
            minn = arr[i];
            mini = i;
        }
    }
    n = n - 1;
    if(maxi > mini)
    {
        mini = mini + 1;
    }
    cout<<maxi + n - mini;
    return 0;
}