//读入一组string并放在vector中
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string temp = "";
    vector<string> result;//不赋初值

    cout << "Please enter string, we will push them into vector : " << endl;
    while(cin >> temp){
        result.push_back(temp);
        if(temp == "0")//输入0结束程序
            break;
    }

    //打印结果
    for(auto &i : result)
        cout << i << " "; 

    return 0;
}