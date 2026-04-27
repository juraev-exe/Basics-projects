#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<iomanip>
#include<climits>
#include<cctype>
#include<set>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    int count = 0;
    int cnt = 0;
    vector <int> v(a);
    for(int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    for(int i = 0; i < a; i++)
    {
        if(b <= v[a-1])
        {
            x = v[a-1]-b;
        }
        if(b > v[0])
        {
            y = b - v[0];
        }
    }
    if(x > y)
    {
        cout<<b-v[0]+v[a-1]-v[0]<<endl;
    }
    else
    {
        cout<<v[a-1]-b + v[a-1]-v[0]<<endl;
    }

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
