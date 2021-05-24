//读入整数输出前后和
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> vec;
    int userInt = 0;

    //接受用户输入,以0结尾
    cout << "Please enter number of numbers ended with 0 :";
    while(cin >> userInt){
        if(userInt == 0)
            break;
        vec.push_back(userInt);
    }

    //输出前后和
    cout << "The sum of two side numbers is :";
    for(int i = 0;i < vec.size()/2;i++){
        cout << vec[i] + vec[vec.size() -1 - i] << " ";
    }

    return 0;
}