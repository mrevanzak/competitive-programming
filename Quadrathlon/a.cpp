#include <iostream>
using namespace std;

void ans(int a, int b){
    if(abs(a-b) <= 4)
        cout << "Ya" << endl;
    else
        cout << "Tidak" << endl;
}

int main(){
    int a, b;

    cin >> a >> b;
    ans(a, b);
}