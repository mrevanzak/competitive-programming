#include <iostream>
using namespace std;

int num[1001], p=1;

int div3(int c, int k){
    for(int i=c; i<=k; i++){
        if(p%3 == 0 || p%10 == 3) {
            i--;
            p++;
            continue;
        }
        num[i] = p;
        p++;
    }
    return num[k];
}

int main(){
    int t, k, c=0;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        if(k>=c){
            printf("%d\n", div3(c+1, k));
            c=k;
        }
        else
            printf("%d\n", num[k]); 
    }
}