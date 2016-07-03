#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> v = {"a", "b", "c"};

    for(auto iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << endl;

    cout << "---------" << endl;
    for(auto iter = v.begin(); iter != v.end(); )
        cout << *iter++ << endl;

    cout << "---------" << endl;
//    for(auto iter = v.begin(); iter != v.end(); )
      //  cout << ++*iter << endl;

    cout << "---------" << endl;
    for(auto iter = v.begin(); iter != v.end(); )
        cout << *++iter << endl;

    return 0;
}
