//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s[5] = {"a","b","C","C","e"};

    string temp = "";
    int cnt = 0;
    int isSame = 0;
    while(cnt < 5){
        if((temp == s[cnt]) && (isupper(s[cnt][0]))){
            cout << "same words :" << temp << endl;
            isSame = 1;
            break;
        }
        temp = s[cnt];
        cnt++;
    }
    if(!isSame){
        cout << "no same words" << endl;
    }

    return 0;
}