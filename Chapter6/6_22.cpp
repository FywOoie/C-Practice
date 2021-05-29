//交换两个int指针
#include <iostream>
#include <vector>
using namespace std;

void swap(int* &a, int* &b){
    int *c = NULL;
	c = a;
	a = b;
	b = c;
}

int main(){
    int i1 = 1, i2 = 2;
    int *p1 = &i1, *p2 = &i2;
    cout << *p1 << " " << *p2 << endl;

    swap(p1, p2);

    cout << *p1 << " "  << *p2;

    return 0;
}