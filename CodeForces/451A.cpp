#include <iostream>
using namespace std;
int main(){
  int x1, x2; cin >> x1 >> x2;
  if (min(x1, x2) % 2 == 0) cout << "Malvika" << '\n';
  else cout << "Akshat" << '\n';
  return 0;
}
