#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
    string total;
    string word;
    while(cin>>word) {
        total += " " +  word;
    }
    cout << total << endl;

    return 0;
}
