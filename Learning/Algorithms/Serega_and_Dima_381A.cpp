#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    
    int left = 0, right = n - 1;
    int serega = 0, dima = 0;
    bool serega_turn = true;
    
    while(left <= right) {
        if(cards[left] > cards[right]) {
            if(serega_turn) {
                serega += cards[left];
            } else {
                dima += cards[left];
            }
            left++;
        } else {
            if(serega_turn) {
                serega += cards[right];
            } else {
                dima += cards[right];
            }
            right--;
        }
        serega_turn = !serega_turn;
    }
    
    cout << serega << " " << dima << endl;
    return 0;
}