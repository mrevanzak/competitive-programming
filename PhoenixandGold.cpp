#include <iostream>
using namespace std;
 
void solve(){
    int n, x, num[101], sum=0;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> num[i];
        sum+=num[i];
    }
    if(sum==x) cout << "NO" << endl;
    else{
        sum=0;
        for(int i=0; i<n; i++){
            sum+=num[i];
            if(sum==x) swap(num[i], num[i+1]);
        }
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << num[i] << " ";
        }
        cout << endl;
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