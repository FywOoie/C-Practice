//输出单数和复数形式
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main(){
    cout << make_plural(1,"success","es") << " ";

    return 0;
}