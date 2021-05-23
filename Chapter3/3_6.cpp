//This program transform user input to XXXXX..
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "";

    //get input string
    cout << "Please enter a string, we will transform it to XX.. : " << endl;
    cin >> s;

    //change string
    for(auto &r : s){
        r = 'X';
    }

    //print result
    cout << "Result : " << s << endl;

    return 0;
}
