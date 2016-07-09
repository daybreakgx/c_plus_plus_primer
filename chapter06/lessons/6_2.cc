#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    int ret = -1;
    occurs = 0;
    decltype(s.size()) index = 0;
    auto size = s.size();
    for(; index < size; ++index) {
        if(c == s[index]) {
            ret = (ret == -1) ? index : ret;
            ++occurs;
        }
    }
    return ret;   
}


int main()
{
    string s = "abcdaabcd";
    decltype(s.size()) count = 0;
    int index = 0;

    index = find_char(s, 'c', count);

    cout << "index: " << index << ", count: " << count << endl;
    return 0;
}
