#include<iostream>
#include"Sales_item.h"

int main()
{
    Sales_item book_new, book_last;
    int total_count = 0;
     
    std::cin >> book_last;
    total_count = 1; 
    while(std::cin >> book_new) {
        if(book_new.isbn() == book_last.isbn()) {
            total_count++;
        } else {
            std::cout << book_last.isbn() << " count:"<< total_count<< std::endl;
            total_count = 1;
        }
        book_last = book_new;
    }
    std::cout << book_last.isbn() << " count:"<< total_count<< std::endl;
    return 0;
}
