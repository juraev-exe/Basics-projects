#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s;
    cin >> n >> s;
    vector<int> x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int L = x[0];
    int R = x[n-1];
    int ans = (R - L) + min(abs(s - L), abs(s - R));
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
