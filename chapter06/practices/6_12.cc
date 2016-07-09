#include<iostream>
using std::cout; using std::endl;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 20, b = 10;

    cout << "before swap, a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "after swap, a: " << a << ", b: " << b << endl;
    return 0;
}
