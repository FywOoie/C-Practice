//从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词

#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;

    //一次读一行
    //while(getline(cin, line))
    //    cout << line << endl;

    //一次读一个词
    while(cin >> line)
        cout << line << endl;
        
    return 0;
}
