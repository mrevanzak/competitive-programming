#include <iostream>
using namespace std;

int main(){
    int r, b, d, n;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> r >> b >> d;
        if((max(r,b)-1)/min(r,b)<=d) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}