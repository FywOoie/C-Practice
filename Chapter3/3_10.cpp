//读入包含标点的字符串，去除后输出字符串剩余部分
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "";
    string result = "";

    //get input string
    cout << "Please enter a string, we will transform it to string without punctuation : " << endl;
    cin >> s;

    //change the string
    for(auto &r : s){
        if(!ispunct(r)){
            result += r;
        }
    }

    //print the string
    cout << "Result : " << result << endl;

    return 0;
}
