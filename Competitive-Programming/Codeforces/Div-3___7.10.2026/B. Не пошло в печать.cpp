#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200000 + 5;

bool printed[MAXN];
int st[MAXN];   // stack of documents
int top;        // top index of stack

void solveCase(int n, string s) {
    memset(printed, false, sizeof(printed));
    top = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            st[++top] = i + 1;
        } else if (s[i] == '2') {
            if (top > 0) {
                printed[st[top]] = true;
                top--;
            } else {
                 printed[i + 1] = true;
            }
        } else if (s[i] == '3') {
            printed[i + 1] = true;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) cnt++;
    }

    cout << cnt << "\n";
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) cout << i << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        solveCase(n, s);
    }

    return 0;
}