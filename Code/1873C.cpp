#include <iostream>
using namespace std;
int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); int t; if(!(cin>>t)) return 0; while(t--){ char grid[10][10]; int score=0; for(int i=0;i<10;i++){ for(int j=0;j<10;j++){ cin>>grid[i][j]; if (grid[i][j]=='X'){ int rowDist = min(i+1, 10 - i); int colDist = min(j+1, 10 - j); score += min(rowDist, colDist); } } } cout<<score<<"\n"; } return 0; }
