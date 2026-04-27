#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k;
    cin>>k;
    int maxx = LLONG_MIN;
    vector <int> v(k);
    for(int i = 0; i < k; i++)
    {
        cin>>v[i];
         maxx = max(maxx,v[i]);
    }
    cout<<maxx*k<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}