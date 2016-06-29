#include<iostream>
#include<string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    string s, sout;
    cin >> s;

    for(auto c : s)
        if(!ispunct(c))
            sout += c;

    cout << sout << endl;
    return 0;
}
