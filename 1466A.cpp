#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int n;
        scanf("%d", &n);

        vector<int> in(n);
        for (auto &p : in)
            scanf("%d", &p);

        set<int> S;
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                S.insert(in[j] - in[i]);

        printf("%d\n", (int)S.size());
        T--;
    }
    return 0;
}