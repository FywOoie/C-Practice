//输入两个string，输出短的
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s[2] = {};
    int cnt = 0;

    cout << "Input two strings :";
    do{
        cin >> s[cnt];
        cnt++;
    } while (cnt < 2);

    cout << "The shorter one is ";
    if(s[0].size() <= s[1].size())
        cout << s[0] << endl;
    else
        cout << s[1] << endl;

    return 0;
}