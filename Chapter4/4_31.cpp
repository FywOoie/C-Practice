//后置版本
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec(3,10);
    vector<int>::size_type cnt = ivec.size();
    cout << "cnt = " << cnt << endl;
    for(vector<int>::size_type ix = 0; ix != ivec.size();++ix, --cnt){
        ivec[ix] = cnt;
        cout << ivec[ix] << " ";//3 2 1
    }
    cout << endl;

    cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size();ix++, cnt--){
        ivec[ix] = cnt;
        cout << ivec[ix] << " ";//结果一样 3 2 1
    }

    return 0;
}