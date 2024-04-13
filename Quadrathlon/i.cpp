#include <iostream>
#include <list>
using namespace std;

int main(){
    list<long long> a;
    long long command, x, q;
    
    cin >> q;
    for(long long i=0; i<q; i++){
        cin >> command;
        if(command == 1){
            cin >> x;
            a.push_back(x);
        }
        else if(command == 2){
            cout << a.front() << "\n";
            a.pop_front();
        }
        else if(command == 3){
            a.sort();
        }
    }
}