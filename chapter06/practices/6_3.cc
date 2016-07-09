#include <iostream>
using std::endl; using std::cout;


int fact(int num)
{
    int ret = 1;
    while(num > 1) {
        ret *= num--;
    }
    return ret;
}

int main()
{
    int ret = 0;
    int num = 6;
    ret = fact(num);

    cout << num <<"! is " << ret << endl;
    return 0;
}
