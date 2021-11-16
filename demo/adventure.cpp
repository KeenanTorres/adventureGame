#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << "Hello adventurer, what is your name?" << endl;
  string name;
  getline(cin, name);

  cout << "Welcome to Sea++, the mighiest underwater dungeon of them all." << endl;
  cout << "Tell me, " << name << ", what is your race?" << endl;
  cout << "Select from the following:\n"
          "\t1 - human\n"
          "\t2 - vampire\n"
          "\t3 - sea creature\n"
          "\t4 - other\n";
  int race;
  cin >> race;

  bool can_swim = true;
  if (race == 1) {
    cout << "I see. You are a human. Are you an avid swimmer? (Enter 1 for yes, 0 for no)"
         << endl;
    cin >> can_swim;
  } else if (race == 2) {
    can_swim = false;
  } else if (race != 3) {
    cout << "Sorry, you cannot enter Sea++ currently due to safety "
            "concerns. Please try again later!"
         << endl;
    return 1;
  }

  if (!can_swim) {
    cout << "Sorry, you will not be able to survive here if you can't swim... Good bye!"
         << endl;
    return 1;
  }

  cout << "Congratulations! You will be able to survive here without any troubles!"
       << endl;
  return 0;
}