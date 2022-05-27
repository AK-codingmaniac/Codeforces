#include <iostream>
using namespace std;
int fda(int ar[],int n)
{
 
    if (n == 1)
        return -1;
    if (n == 2)
        return 0;
    if (ar[0] == ar[1] && ar[0] != ar[2])
        return 2;
    if (ar[0] == ar[2] && ar[0] != ar[1])
        return 1;
    if (ar[1] == ar[2] && ar[0] != ar[1])
        return 0;
    for (int i = 3; i < n; i++)
        if (ar[i] != ar[i - 1])
            return i;
 
    return -1;
}
int main()
{
    int j,tst,n;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int ar[n+9];
        for(int j=0; j<n; j++)
        {
            cin>>ar[j];
        }
        cout << fda(ar,n)+1<<endl;
 
    }
    return 0;
}