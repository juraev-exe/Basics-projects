#include<iostream>
using ll = long long;
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll mx = max(a,max(b,c));
    ll mn = min(a,min(b,c));
    ll md = (a+b+c)-mn-mx;
    if(mx - mn >= 10)
    {
        cout<<"check again"<<endl;
    }
    else
    {
        cout<<"final "<<md<<endl;
    }
}
