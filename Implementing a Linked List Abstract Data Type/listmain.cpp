// listmain.cpp

#include <iostream>
#include <algorithm>   // For std::for_each
#include "llist.h"   

int main() {
    std::cout << "Starting program\n";
    // Make an empty list
    LinkedList my_list;
    // Insert some elements
    my_list.insert(my_list.end(), "Fred");
    my_list.insert(my_list.end(), "Wilma");
    my_list.insert(my_list.end(), "Betty");
    my_list.insert(my_list.end(), "Dino");
    my_list.insert(my_list.end(), "Barney");
    // Print the list with a loop
    std::cout << "Print the list with a for loop: \n";
    for (string elem : my_list) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
    // Print the list with a standard algorithm!
    std::cout << "Print the list with std::for_each: \n";
    std::for_each(my_list.begin(), my_list.end(), 
            [](const string& s) { std::cout << s << ' '; });
    std::cout << '\n';
    // Remove Dino
    std::cout << "Remove Dino: \n";
    auto p = my_list.find("Dino");
    my_list.remove(p);
    // Print the list with a standard algorithm!
    std::for_each(my_list.begin(), my_list.end(), 
            [](const string& s) { std::cout << s << ' '; });
    std::cout << '\n';

    // Print the list backwards
    std::cout << "Print backwards: \n";
    p = my_list.end();
    while (p-- != my_list.begin()) {
        std::cout << *p << ' ';
    }
    std::cout << '\n';

    LinkedList empty;
    // Print the empty list backwards
    std::cout << "Print empty backwards: \n";
    std::cout << '[';
    p = empty.end();
    while (p-- != empty.begin()) {
        std::cout << *p << ' ';
    }
    std::cout << "]\n";

    std::cout << "*** Add lots more test code to convince yourself that ";
    std::cout << "your code is correct. ***\n";


    std::cout << "Program finished\n";
}
