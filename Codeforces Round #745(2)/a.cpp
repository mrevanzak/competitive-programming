#include <iostream>
using namespace std;

void solve(){
    int n;
    long long m=1000000007;
    long long ans=1;
    cin >> n;
    for(int i=n*2; i>2; i--){
        ans*=i;
        ans%=m;
    }
    cout << ans%m << endl;
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