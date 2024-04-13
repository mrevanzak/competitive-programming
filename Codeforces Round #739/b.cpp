#include <iostream>
using namespace std;

void cek(int a, int b, int c){
    int diff = abs(a-b);
    int circle = diff*2;
    if(c>circle || max(a,b)>circle) printf("-1\n");
    else if(c<diff+1) printf("%d\n", c+diff);
    else printf("%d\n", c-diff);
}

int main(){
    int t, a, b, c;

    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &a, &b, &c);
        cek(a,b,c);
    }
}