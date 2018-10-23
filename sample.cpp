#include <iostream>
#include <iomanip>

int main() {
    // User input name
    std::string full_name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Hello, " << full_name << "!" << std::endl;

    // Menu variables
    int item_num1 = 1, item_num2 = 2, item_num3 = 3, item_num4 = 4, item_num5 = 5;
    std::string item_name1 = "Amazon Echo", item_name2 = "Fire TV Stick", item_name3 = "Echo Show",
                item_name4 = "Amazon Cloud Cam", item_name5 = "AmazonBasics Microwave";
    double price1 = 29.99, price2 = 39.99, price3 = 229.99, price4 = 119.99, price5 = 59.99;

    // Display the menu
    std::cout << std::left << std::setw(10) << "Item number" << '\t' << std::setw(24) << "Item Name" << '\t' << "Price" << std::endl;
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    std::cout << std::left << std::setw(10) << item_num1 << '\t' << std::setw(24) << item_name1 << '\t' << "$" << price1 << std::endl;
    std::cout << std::left << std::setw(10) << item_num2 << '\t' << std::setw(24) << item_name2 << '\t' << "$" << price2 << std::endl;
    std::cout << std::left << std::setw(10) << item_num3 << '\t' << std::setw(24) << item_name3 << '\t' << "$" << price3 << std::endl;
    std::cout << std::left << std::setw(10) << item_num4 << '\t' << std::setw(24) << item_name4 << '\t' << "$" << price4 << std::endl;
    std::cout << std::left << std::setw(10) << item_num5 << '\t' << std::setw(24) << item_name5 << '\t' << "$" << price5 << std::endl;

    char decision;
    std::cout << "Do you want to purchase an item? Answer (y/n): ";
    std::cin >> decision;

    bool go_on = false;

    if(decision == 'n') {
        std::cout << "Have a nice day" << std::endl;
        go_on = false;
    } else if(decision == 'y') {
        go_on = true;
    }

    if(go_on) {
        int item_choice;
        std::cout << "What item number? ";
        std::cin >> item_choice;
    }

    return  0;
}