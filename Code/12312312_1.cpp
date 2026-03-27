#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        char c;
        cin>>c;
        int y;
        cin>>y;
        if(x < y)
        {
            cout<<x<<"<"<<y<<endl;
        }
        else if(x > y)
        {
            cout<<x<<">"<<endl;
        }
        else if(x == y)
        {
            cout<<x<<"="<<y<<endl;
        }
    }
}
