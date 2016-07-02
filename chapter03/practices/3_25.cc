#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;

int main()
{
    unsigned grade;
    vector<unsigned> scores(11, 0);

    auto it = scores.begin();
    while(cin >> grade) {
        if(grade <= 100)
           *(it + grade/10) += 1; 
    }
    cout << "print ..." << endl; 
    for(auto it = scores.begin(); it != scores.end(); it++)
        cout << *it << endl;
    return 0;
}

