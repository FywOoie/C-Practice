//把前两个数组的内容拷贝到第三个数组中
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[] = "qwe";
	char str2[] = "asd";
	char str3[10];
	strcpy(str3,str1);
	strcat(str3," ");
	strcat(str3,str2);
	cout << str3;

    return 0;
}