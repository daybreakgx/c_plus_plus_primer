#include <iostream>
using std::cin; using std::cout; using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 20;
    cout << "before reset, j: " << j << endl;

    reset(j);

    cout << "after reset, j: " << j << endl;
    return 0;
}
