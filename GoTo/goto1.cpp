#include <iostream>
using namespace std;

int ans(int a, int b, int k){
    if (a % k == 0){
        return (b/k) - (a/k) + 1;
    }
    return (b / k) - (a / k);
};

int main(){
    int n, a, b, k;

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a >> b >> k;
        printf("Case %d: %d\n", i+1, ans(a, b, k));
    }
}

// https://ideone.com/kNoQf4