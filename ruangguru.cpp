#include <iostream>
using namespace std;

int ans(int n){
    int base = 9;
    int width = 1;
    int count = 0;
    int start = 1;

    while (n>count + base * width){
        count += base * width;
        base = base * 10;
            width ++;
            start = start * 10;  
    }
    int diff = (int)(n - count - 1);
    int number = start + diff / width;
    int offset = width - diff % width - 1;
    for (int i = 0; i < offset; i ++) {
        number = number / 10;
    }
    return number % 10;
}

int main(){
    int x;
    cin >> x;
    cout << ans(x) << endl;
}

// 1   1
// 2   2
// 3   3
// 4   4
// 5   5
// 6   6
// 7   7
// 8   8
// 9   9
// 1   10  -9
// 0   11  -10
// 1   12  -11
// 1   13  %9-3
// 1   14  %9-4
// 2   15  %9-4
// 1   16  %9-6
// 3   17  %9-5
// 1   18  -17
// 4   19
// 1   20
// 5   21
// 1   22
// 6   23
// 1   24
// 7   25
// 1   26
// 8   27
// 1   28
// 9   29
// 2   30
// 0   31