//将数的值置为0
#include <iostream>
#include <vector>
using namespace std;

void reset(int &i){
    i = 0;
}

int main(){
    int h = 5;
    reset(h);
    cout << h;

    return 0;
}