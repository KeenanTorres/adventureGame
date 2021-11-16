#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to Sea++, the best seafood restaurant in town!" << endl;
  cout << "Would you like to:\n"
          "\t1 - sit in\n"
          "\t2 - order for take out or\n"
          "\t3 - pick up an order?\n";
  int choice;
  cin >> choice;
  // do cin.ignore(); after cin >> ... like this if you're planning to use getline(...) later on
  // (https://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs)
  cin.ignore();

  string name;
  switch (choice) {
    case 1:
      cout << "Follow me please. What would you like to order?" << endl;
      break;
    case 2:
      cout << "May I have a name on the order?" << endl;
      getline(cin, name);

      cout << "Thank you " << name << ", what would you like to order?" << endl;
      break;
    case 3:
      cout << "What is your name?" << endl;
      getline(cin, name);

      cout << "Thank you for waiting, " << name << ", here is your order!" << endl;
      return 0;
    default:
      cout << "Sorry, I don't understand. Please try again later!" << endl;
      return 1;
  }

  string order;
  getline(cin, order);

  cout << order << " will be brought to you shortly. Thank you for your business!" << endl;
  return 0;
}