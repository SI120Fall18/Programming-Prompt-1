#include <iostream>
#include <iomanip>

int main()
{
  std::string bar;
  const double item1 = 29.99;
  const double item2 = 39.99;
  const double item3 = 229.99;
  const double item4 = 119.99;
  const double item5 = 59.99;
  int choice;
  int item_number;
  int quantity;
  double total;
  double shipping = 4.99;
  double tax = 1.0725;
  std::string address;


  std::string name;
  std::cout << "Enter your full name: ";
  std::getline(std::cin,name);
  std::cout << "Hello " << name << "!\n";


  std::cout << std::endl << std::left << std::setw(16) << "Item Number"
  << std::setw(22) << std::left << "Item Name" << std::setw(6) <<std::left
  << "Price" << std::endl;

  std::cout << bar.assign(51,'-') << std::endl;

  std::cout << std::setw(4) << "1" << std::setw(12) << " " << std::setw(25)
  << std::left << "Amazon Echo" << "$" << std::setw(10) << std::fixed
  << std::setprecision(2) << item1 << std::endl;

  std::cout << std::setw(4) << "2" << std::setw(12) << " " << std::setw(25)
  << std::left << "Fire TV Stick" << "$" << std::setw(10) << std::fixed
  << std::setprecision(2) << item2 << std::endl;

  std::cout << std::setw(4) << "3" << std::setw(12) << " " << std::setw(25)
  << std::left << "Echo Show" << "$" << std::setw(10) << std::fixed
  << std::setprecision(2) << item3 << std::endl;

  std::cout << std::setw(4) << "4" << std::setw(12) << " " << std::setw(25)
  << std::left << "Amazon Cloud Cam" << "$" << std::setw(10) << std::fixed
  << std::setprecision(2) << item4 << std::endl;

  std::cout << std::setw(4) << "5" << std::setw(12) << " " << std::setw(25)
  << std::left << "AmazonBasics Microwave" << "$" << std::setw(10) << std::fixed
  << std::setprecision(2) << item5 << std::endl;

  std::cout << std::endl << "Would you like to purchase any of the items?"
  << std::endl << "Enter [1] for yes"
  << std::endl << "Enter [2] for no" << std::endl
  << "Your choice: ";

  std::cin >> choice;

  switch(choice){
    case 1:
      std::cout << "Choose an Item Number to purchase: ";
      std::cin >> item_number;

      std::cout<<"Choose the quantity you wish to purchase of selected item: ";
      std::cin >> quantity;

      if(item_number == 1){
        total = ((item1 * quantity)*tax) + shipping;

        std::cout<< "You chose " << quantity << " of the Amazon Echo(s)\n"
        << "Your total will come out to be $" << std::fixed <<std::setprecision(2)
        << total << std::endl;


        std::cin.ignore();
        std::cout<< "Enter your address for shipping: ";
        std::getline(std::cin,address);

        std::cout<<std::endl;

      } else if(item_number == 2){
        total = ((item2 * quantity)*tax) + shipping;

        std::cout<< "You chose " << quantity << " of the Fire TV Stick(s)\n"
        << "Your total will come out to be $" << std::fixed <<std::setprecision(2)
        << total << std::endl;

        std::cin.ignore();
        std::cout<< "Enter your address for shipping: ";
        std::getline(std::cin,address);

        std::cout<<std::endl;

      } else if(item_number == 3){
        total = ((item3 * quantity)*tax) + shipping;

        std::cout<< "You chose " << quantity << " of the Echo Show(s)\n"
        << "Your total will come out to be $" << std::fixed <<std::setprecision(2)
        << total << std::endl;

        std::cin.ignore();
        std::cout<< "Enter your address for shipping: ";
        std::getline(std::cin,address);

        std::cout<<std::endl;

      } else if(item_number == 4){
        total = ((item4 * quantity)*tax) + shipping;

        std::cout<< "You chose " << quantity << " of the Amazon Cloud Cam(s)\n"
        << "Your total will come out to be $" << std::fixed <<std::setprecision(2)
        << total << std::endl;

        std::cin.ignore();
        std::cout<< "Enter your address for shipping: ";
        std::getline(std::cin,address);

        std::cout<<std::endl;

      }else if(item_number == 5){
        total = ((item5 * quantity)*tax) + shipping;

        std::cout<< "You chose " << quantity << " of the AmazonBasics Microwave(s)\n"
        << "Your total will come out to be $" << std::fixed <<std::setprecision(2)
        << total << std::endl;

        std::cin.ignore();
        std::cout<< "Enter your address for shipping: ";
        std::getline(std::cin,address);

        std::cout<<std::endl;

      }else{
        std::cout << "Your choice was invalid.";
      }

      std::cout<<"Thank you for your purchase!\n";
      break;

    case 2:
      std::cout << "Have a nice day!" <<std::endl;
      break;

    default:
      std::cout << "You entered an invalid choice. I said to pick yes [1] or no [2]"
      << " \\('-')/ " << std::endl;
      break;
  }


  return 0;
}
