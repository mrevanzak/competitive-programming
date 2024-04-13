#include <iostream>
using namespace std;

void spot(int n, int k){
    if(n%2==0) cout << (k%n)+1 << endl;
    else{
        int mid=(n/2);
        int ans=((k/mid)+k)%n;
        cout << ans+1 << endl;
    }
}

int main(){
    int t, n, k;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> k;
        spot(n, k-1);
    }
}