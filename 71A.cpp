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
        if(str.length()>10)
        {
           int mid = str.length()-2;
           string middle;
           middle = to_string(mid);
           str = str[0] + middle + str[str.length()-1];
        }
        cout<<str<<endl;
        T--;
    }
    return 0;

}