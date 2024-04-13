#include <iostream>
using namespace std;

int main(){
    long long n;
    
    cin >> n;
    n%=6;
    if(n==1) cout << 1 << endl;
    else if(n==2) cout << 0 << endl;
    else if(n==3) cout << 3 << endl;
    else if(n==4) cout << 4 << endl;
    else if(n==5) cout << 3 << endl;
    else cout << 0 << endl;
}