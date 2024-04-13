#include <iostream>
using namespace std;
 
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int cell[n+5][m+5]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0) continue;
            if(i==0) cell[i][j]=cell[i][j-1]+1;
            else if(j==0) cell[i][j]=cell[i-1][j]+1;
            else cell[i][j]=cell[i-1][j]+(j+1);
        }
    }
    if(cell[n-1][m-1]==k) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int testcase;
    cin >> testcase;
    for (int i=0; i<testcase; i++){
        solve();
    }
    return 0;
}