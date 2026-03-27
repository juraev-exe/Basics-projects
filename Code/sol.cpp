#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int a;
    char c;
    int b;
    cin>>a>>c>>b;
    int h,m;
    cin>>h>>m;
    if(a+h < 24)
    {
    if((b + m) >= 10)
    {
        if(b + m >= 60)
        {
             cout<<((a+h)+1)-24<<":0"<<(b+m)-60;
        }
        else
        {
            cout<<(a+h)<<":"<<b+m;
        }
    }
}
    else
    {
        if((b + m) >= 10)
        {
            if(b + m >= 60)
            {
                cout<<((a+h)+1)-24<<":0"<<(b+m)-60;
            }
            else if(b + m < 60)
            {
                cout<<(a+h)-24<<":0"<<b+m;
            }
        }
        else
        {
            cout<<(a+h)-24<<":0"<<b+m;
        }

    }
}

