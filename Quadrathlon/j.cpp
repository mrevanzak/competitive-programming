#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    string s1 = "ga";
    string s2 = "gi";
    string s3 = "gu";
    string s4 = "ge";
    string s5 = "go";
    string ans;

    cin >> s;
    int size = s.size();
    int tmp = -1;
    for(int i=0; i<size/2; i++){
        if(i == 0) tmp+=2;
        else tmp+=4;
        
        if(s[tmp] == 'a'){
            s.insert(tmp+1, s1);
            continue;
        }
        else if(s[tmp] == 'i'){
            s.insert(tmp+1, s2);
            continue;
        }
        else if(s[tmp] == 'u'){
            s.insert(tmp+1, s3); 
            continue;
        }
        else if(s[tmp] == 'e'){
            s.insert(tmp+1, s4);
            continue;
        }
        else {
            s.insert(tmp+1, s5);
            continue;
        }
    }
    cout << s;
}