//比较字符串
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char str1[] = "qwe";
    const char str2[] = "qw1e";

    if(!strcmp(str1,str2))
        cout << "two strings are the same" << endl;
    else
        cout << "two strings are not the same" << endl;

    return 0;
}