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

    auto size = v.size();
    for(decltype(v.size()) index = 0; index < size; index++) {
        decltype(v.size()) next = index + 1;
        if(next < size)
            cout << v[index++] + v[next] << endl;
        else
            cout << v[index++] << endl;
    }
    return 0;
}
