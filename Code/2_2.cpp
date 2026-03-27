#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b;
        cin>>b;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < b; i++)
        {
            if(b == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        int total = cnt1+2*cnt2;
        int half = total/2;
        if(total % 2 == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(half % 2 == 0 && cnt1 == 0)
            {
                cout<<"YES"<<endl;

            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
