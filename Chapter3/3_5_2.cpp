//用空格隔开
#include <iostream>
#include <string>

using namespace std;
int main(){
    string stringTemp;
	string stringSum;
	while (getline(cin ,stringTemp))//get string
	{
        stringTemp += " ";//加空格
		stringSum += stringTemp;
		cout << stringSum << endl;
	}

    return 0;
}
