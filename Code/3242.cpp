#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int sum = 0;
        int x = 0;

        for (int i = 0; i < n; i++) {
            string word;
            cin >> word;

            if (sum + word.size() <= m) {
                sum += word.size();
                x++;
            } else {

                for(int j = i + 1; j < n; j++) {
                    cin >> word;
                }
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}
