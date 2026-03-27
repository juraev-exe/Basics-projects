#include <iostream>
using namespace std;
int main(){
  int n; cin >> n; int x; int amazing = 0;
  long long maxS = -1, minS = 1e18; // simple placeholder
  for(int i=0;i<n;i++){ cin >> x; if(x>maxS) {maxS=x; amazing++;} else if(x<minS){minS=x; amazing++;} }
  cout << amazing << endl; return 0;
}
