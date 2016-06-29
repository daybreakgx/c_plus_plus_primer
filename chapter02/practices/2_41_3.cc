#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item;
    double price = 0;
    unsigned total_sold = 0;
    double total_revenue = 0;
    
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;

        total_sold += item.units_sold;
        total_revenue += item.revenue;
    }

    std::cout << item.bookNo << " " << total_sold << " " << total_revenue << std::endl;

    return 0;
}
