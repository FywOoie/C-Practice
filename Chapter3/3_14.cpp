//读入一组整数并放在vector中
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp = 0;
    vector<int> result;//不赋初值

    cout << "Please enter integer, we will push them into vector : " << endl;
    while(cin >> temp){
        result.push_back(temp);
        if(temp == 0)//输入0结束程序
            break;
    }

    //打印结果
    for(auto &i : result)
        cout << i; 

    return 0;
}