#include <iostream>
using namespace std;

int main(){
    long long n, k, count=0;
    cin >> n >> k;
    long long d[n];
    for(int i=1; i<=n; i++){
        cin >> d[i];
    }

    for(int i=1; i<=n-1; i++){
        if(d[i]==0) continue;
        for(int j=i+1; j<=n; j++){
            if(d[j]==0) break;
            if((d[i]+d[j])%k==0){
                count++;
                d[i]=0;
                d[j]=0;
                break;
            }
        }
    }
    cout << count*2;
}