//划分分数段
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int grade;
    vector<unsigned> scores(11,0);
    auto it = scores.begin();

    //将对应分数段加1
    while(cin >> grade){
        if(grade <= 100 && grade > 0){
            ++*(it + grade/10);
        }
        if(grade == -1) break;
    }

    //输出结果
    for(auto itTemp = scores.begin();itTemp != scores.end();++itTemp)
        cout << *itTemp << " ";

    return 0;
}