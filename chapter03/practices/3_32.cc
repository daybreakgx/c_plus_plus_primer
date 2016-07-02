#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> v(10);
    int index = 0;

    for(auto &i : v)
        i = index++;
    for(auto j : v)
        cout << j << endl;

    vector<int> v_copy = v;
    for(auto j : v_copy)
        cout << j << endl;

    return 0;
}


