#include <iostream>
#include "Sales_data.h"


int main()
{
    Sales_data item_last, item_new;
    int total_cnt = 0;
    
    std::cin >> item_last.bookNo;
    total_cnt += 1;

    while(std::cin >> item_new.bookNo) {
        if(item_new.bookNo == item_last.bookNo) {
            total_cnt += 1;
        } else {
            std::cout << item_last.bookNo << " " << total_cnt << std::endl;
            total_cnt = 1;
        }
        item_last.bookNo = item_new.bookNo;
    }
    std::cout << item_last.bookNo << " " << total_cnt << std::endl;

    return 0;
}
