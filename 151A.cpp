#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mindrink = (k*l)/(nl);
    int minlime = c*d;
    int minsalt = p/np;
    cout<<min(min(mindrink,minlime),minsalt)/n<<endl;
    return 0;
}