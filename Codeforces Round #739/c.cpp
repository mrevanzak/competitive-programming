#include <iostream>
using namespace std;

void ans(int k){
    int c=1, r=1;

    while((c-1)*(c-1)+1<=k){
        if((c-1)*(c-1)+1==k) 
            cout << r << " " << c << endl;
        c++;
    }
    c--;
    int num = (c-1)*(c-1)+1;
    while(r<c){
        num++;
        r++;
        if(num == k) cout << r << " " << c << endl;
    }
    while(c>0){
        num++;
        c--;
        if(num == k) cout << r << " " << c << endl;
    }
}

int main(){
    int t, k;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        ans(k);
    }
}