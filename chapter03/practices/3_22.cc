#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    string s;
    vector<string> v;
    while(cin >> s) {
        if(!s.empty())
            v.push_back(s);
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        for(auto &c : *it)
            c = toupper(c);
        cout << *it << endl;
    }

    return 0;
}
