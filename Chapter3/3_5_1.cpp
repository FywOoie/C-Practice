//读入多个字符串并连接它们输出
#include <iostream>
#include <string>

using namespace std;
int main(){
    string stringTemp;
	string stringSum;
	while (getline(cin ,stringTemp))//get string
	{
		stringSum += stringTemp;
		cout << stringSum << endl;
	}

    return 0;
}
