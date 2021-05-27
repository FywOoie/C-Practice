//读取输入看元音字母数量
#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp = "";
    cout << "Please enter a string : ";
    cin >> temp;

    int cntVol = 0;
    char tempChar;
    for(auto t : temp){
        if(tempChar == 'f'){
            switch (t){
                case 'f' :
                    ++cntVol;
                    break;
                case 'l' :
                    ++cntVol;
                    break;
                case 'i' :
                    ++cntVol;
                    break;
            }
        }
        tempChar = t;
    }

    cout << "There are " << cntVol << " ff,fi,fl in the string." << endl;

    return 0;
}