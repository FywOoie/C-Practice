//string改成小写
#include <iostream>
#include <string>
using namespace std;

void stringToLower(string &s){
    for(auto it = s.begin();it != s.end();it++){
        *it = tolower(*it);
    }
}

int main(){
    string s = "adasdasdaA";
    stringToLower(s);
    cout << s << endl;

    return 0;
}