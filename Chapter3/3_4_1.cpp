//读入两个字符串，比较是否相等。如果不相等，输出大字符串
#include <iostream>
#include <string>

using namespace std;
int main(){
    string s1 = "", s2 = "";//初始化string
	cin >> s1 >> s2;
	
    if (s1 != s2)
	{
        string biggerS = (s1 >= s1 ? s1 : s2);//get bigger string
        cout << "two string are different, the bigger one is " << biggerS <<endl;
	}else{
        cout << "two string are the same, they are " << s1 <<endl;//same string
    }
}
