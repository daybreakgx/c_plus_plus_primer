#include<iostream>
using std::cout; using std::endl; using std::cin;

void abs_func(int num)
{
    if(num >= 0)
        cout << num << endl;
    else
        cout << -num << endl;
    return;
}

int main()
{
    int num = -2;
    abs_func(num);
    return 0;
}
