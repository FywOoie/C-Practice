//读取输入看元音字母数量
#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp = "";
    cout << "Please enter a string : ";
    cin >> noskipws >> temp;

    int cntVol = 0;
    for(auto t : temp){
        switch (t){
            case ' ' : case '\t' : case '\n' :
                ++cntVol;
        }
    }

    cout << "There are " << cntVol << " special characters in the string." << endl;

    return 0;
}