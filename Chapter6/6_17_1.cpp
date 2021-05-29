//string中是否有大写字母
#include <iostream>
#include <string>
using namespace std;

bool containCap(const string s){
    bool temp = false;
    for(auto it = s.begin();it != s.end();it++){
        if(((*it) >= 'A') && ((*it) <= 'Z'))
            temp = true;
    }
    return temp;
}

int main(){
    string s = "adasdasdaA";
    cout << containCap(s) << endl;

    return 0;
}