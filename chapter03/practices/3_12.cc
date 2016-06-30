#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
    vector<vector<int>> ivec;
//    vector<string> svec1 = ivec;
    vector<string> svec(10, "null");
   
    cout << "print ivec" << endl;
    for(auto i : ivec)
        for(auto j : i)
            cout << j << endl;
    cout << "print svec" << endl;
    for(auto s : svec)
        cout << s << endl;

    return 0;
}
