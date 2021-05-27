//读取输入看元音字母数量
#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp = "";
    cout << "Please enter a string : ";
    cin >> temp;

    int cntVol = 0;
    for(auto t : temp){
        switch (t){
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
                ++cntVol;
        }
    }

    cout << "There are " << cntVol << " vowels in the string." << endl;

    return 0;
}