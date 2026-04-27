#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];
        int good = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(a[i] - a[i + 1]);
            if (diff != 5 && diff != 7)
            good = 0;
        }

        if(good)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
