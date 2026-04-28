#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <deque>
#include <climits>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using ll = long long;
using namespace std;
int main()
{
    ll a;
    cin>>a;
    vector <ll> v(a);
    map < ll,ll> mp;
    for(ll i = 0; i < a; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto c : mp)
    {
        cout<<c.first<<endl;
    }
}