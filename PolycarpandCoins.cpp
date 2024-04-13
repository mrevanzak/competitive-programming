#include <iostream>
#include <cmath>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    if(((n/3)*3) == n-1) cout << ((n/3)+1) << " " << n/3 << endl;
    else if(((n/3)*3) == n-2) cout << n/3  << " " << ((n/3)+1) << endl;
    else cout << n/3 << " " << n/3 << endl;
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