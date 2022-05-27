#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int k;
        cin>>k;
        for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--k == 0)
			{
				cout << i << '\n';
				break;
			}
		}
        T--;
    }
    return 0;
}