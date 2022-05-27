#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=="Tetrahedron")
        {
            count = count + 4;
        }
        else if(str[i]=="Cube")
        {
            count = count + 6;
        }
        else if(str[i]=="Octahedron")
        {
            count = count + 8;
        }
        else if(str[i]=="Dodecahedron")
        {
            count = count + 12;
        }
        else if(str[i]=="Icosahedron")
        {
            count = count + 20;
        }
    }
    cout<<count<<endl;
    return 0;
}