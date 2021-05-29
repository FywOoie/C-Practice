//求绝对值
#include <iostream>
using namespace std;

int abs(int i){
    if(i <= 0)
        i = -i;
    return i;
}

int main(){
    int t1 = -5;
    int t2 = 0;
    int t3 = 5;
    cout << abs(t1) << " ";
    cout << abs(t2) << " ";
    cout << abs(t3) << " ";

    return 0;
}