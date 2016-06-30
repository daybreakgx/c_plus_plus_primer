#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main()
{
    vector<string> v;
    string s;
    while(cin >> s)
        v.push_back(s);
    for(auto i : v)
        cout << i << endl;

    return 0;
}
