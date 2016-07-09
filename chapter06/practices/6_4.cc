#include <iostream>
using std::endl; using std::cout;
using std::cin;

void fact()
{
    int ret = 1;
    int num, num_1;
    cout << "Enter a number: " << endl;
    
    cin >> num;
    num_1 = num;
    while(num > 1) {
        ret *= num--;
    }
    cout << num_1 << "! is " << ret << endl;
    return ;
}

int main()
{
    fact();

    return 0;
}
