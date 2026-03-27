#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Basic placeholder adapted from original style
int main(){
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int t; if(!(cin>>t)) return 0; while(t--){ int a; cin>>a; vector<long long> v(a); for(int i=0;i<a;++i) cin>>v[i]; sort(v.begin(), v.end()); cout<<v[1]<<"\n"; } return 0; }
