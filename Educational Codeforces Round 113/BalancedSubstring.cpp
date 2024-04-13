#include <iostream>
#include <string>
using namespace std;
 
void solve(){
    int n;
    string word;
 
    cin >> n >> word;
 
    int a=0, b=0;
    for(int i=0; i<n; i++){
        if(word[i] == 'a') a++;
        else b++;
    }
    if(a==0 || b==0) cout << "-1 -1" << endl;
    else{
        for(int i=0; i<n-1; i++){
            if(word[i]=='a' && word[i+1]=='b'){
                cout << i+1 << " " << i+2  << endl;
                break;
            }
            else if (word[i]=='b' && word[i+1]=='a'){
                cout << i+1 << " " << i+2 << endl;
                break;
            }
        }
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