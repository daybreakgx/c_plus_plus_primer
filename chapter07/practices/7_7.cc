#include <iostream>
using std::cout; using std::cin; using std::endl;

#include "Sales_data_7_6.h"

int main()
{
    Sales_data total;
    if(read(cin, total)) {
        Sales_data trans;
        while(read(cin, trans)) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
    }
    else {
        cout << "No data?!" << endl;
    }
    return 0;
}
