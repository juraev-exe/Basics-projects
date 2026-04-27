#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    unordered_map < int, int > mp;
    int ans = LLONG_MIN;
    int check = LLONG_MIN;
    for(int i = 0; i < a; i++) {
        int gen, x;
        cin >> gen >> x;
        if(gen == 1) {
            ans = max(ans, x);
        }
    }
    if(ans != check) {
        cout << ans << '\n';
    }
    else {
        cout << "-1" << '\n';
    }
}
