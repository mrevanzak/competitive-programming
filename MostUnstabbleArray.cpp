#include <iostream>
using namespace std;
 
void solve(){
    long long n, m;
    cin >> n >> m;
    if(n==1) cout << 0 << "\n";
    else if(n==2) cout << m << "\n";
    else{
        cout << 2*m << "\n";
    }
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