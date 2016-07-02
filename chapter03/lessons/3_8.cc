#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<string> v;
    string s;
    
    while(cin >> s) {
        if(!s.empty()) {
            v.push_back(s);
        }
    }

    for(auto it = v.cbegin(); it != v.cend(); it++) {
        cout << *it << endl;
    }

    return 0;
}
