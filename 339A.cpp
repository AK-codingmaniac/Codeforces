#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int arr[1001];
    int count = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='+')
        {
            arr[count++] = str[i]-'0';
        }
    }
    sort(arr,arr+count);
    for(int i=0;i<count;i++)
    {
        cout<<arr[i];
        if(i==count-1)
        {
            break;
        }
        cout<<"+";
    }
    return 0;
}