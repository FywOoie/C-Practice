//比较返回较大数
#include <iostream>
#include <vector>
using namespace std;

int compare(int a, int* b){
    if(a < *b)
        return *b;
    else
        return a;
}
int main(){
    int i1 = 4, i2 = 5;
    cout << compare(i1, &i2);

    return 0;
}