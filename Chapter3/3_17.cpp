//存入一组值，把所有词改写为大写
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> result;
    string temp;

    //接受输入，0停止
    while(cin >> temp){
        if(temp == "0")
            break;
        result.push_back(temp);
    }

    //改成大写
    for(auto &r : result){
        for(auto &rTemp : r)
            rTemp = toupper(rTemp);
    }

    //输出结果
    for(auto &r : result)
        cout << r << " ";

    return 0;
}