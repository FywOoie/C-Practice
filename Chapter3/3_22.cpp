//输出text第一段（遇到空格）改成大写
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> vec = {"asd rrr","qwe wewe"};//测试文本

    for(auto it = vec.begin();it != vec.end() && !it->empty();++it){
        for(auto stringTemp = it->begin();stringTemp != it->end() && !isspace(*stringTemp);++stringTemp)
            //解引用时访问字符串
            *stringTemp = toupper(*stringTemp);
        cout << *it << endl;//输出 一条测试文本
    }

    return 0;
}