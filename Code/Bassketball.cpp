#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1,a2,a3,a4;
    int b1,b2,b3,b4;
    cin>>a1>>a3>>b1>>b3;
    cin>>a2>>a4>>b2>>b4;
    if (a1+b1+a3+b3>a2+a4+b2+b4){
        cout<<"1";
    }
    else if (a1+b1+a3+b3<a2+a4+b2+b4){
        cout<<"2";
    }
    else {
        cout<<"DRAW";
    }

    return 0;
}