#include<iostream>
using std::cout; using std::cin; using std::endl;

int test_func()
{
    int ret;
    static int refcnt = 0;

    if(refcnt == 0)
        ret = 0;
    else
        ret = 1;
    refcnt++; 
    return ret;
}

int main()
{
    for(int i = 0; i < 10; i++)
        cout << test_func() << endl;
    return 0;
}
