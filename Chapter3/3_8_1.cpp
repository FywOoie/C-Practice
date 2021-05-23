//This program transfotm user input to XXXXX..
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "";
    int count = 0;

    //get input string
    cout << "Please enter a string, we will transform it to XX.. : " << endl;
    cin >> s;

    //change string
    while(count < s.size()){
        s[count] = 'X';
        count++;
    }

    //print result
    cout << "Result : " << s << endl;

    return 0;
}
