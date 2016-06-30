#include<iostream>
#include<vector>

using std::vector;
using std::cin; using std::cout; using std::endl;

int main()
{
    vector<int> v;
    int i;
    while(cin >> i)
        v.push_back(i);
    for(auto i : v)
        cout << i << endl;

    return 0;
}
