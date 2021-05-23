//改写，比较输入的字符串是否等长，不等长，输出长字符串
#include <iostream>
#include <string>

using namespace std;
int main(){
    string s1 = "", s2 = "";//初始化string
	cin >> s1 >> s2;
	
    if (s1.size() != s2.size())
	{
        string longerS = (s1.size() >= s2.size() ? s1 : s2);//get longer string
        cout << "two string are of different size, the longer one is " << longerS <<endl;
	}else{
        cout << "two string are of the same size, they are " << s1.size() <<endl;//same length string
    }
}
