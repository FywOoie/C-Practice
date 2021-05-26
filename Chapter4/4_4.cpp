//添加括号
#include <iostream>
using namespace std;

int main(){
    int resultOrig = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    int resultNew = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);

    cout << "Original result :" << resultOrig << endl;
    cout << "New result :" << resultNew << endl;

    return 0;
}