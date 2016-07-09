#include <iostream>
using std::cout; using std::endl;

#include <initializer_list>
using std::initializer_list;

int para_sum(initializer_list<int> li)
{
    int ret = 0;
    for(const auto& i : li) {
        ret += i;
    }
    return ret;
}

int main()
{
    cout << para_sum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
    return 0;
}
