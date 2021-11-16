// cyoa.cpp
// Name: Keenan Torres

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << "A long time ago in a galaxy far far away..." << endl;
  cout << "The republic is under attack by the separatists and war has begun "     
          "between these two factions." 
       << endl; 
  cout << "The war that has begun is now known as the Clone Wars. You must " 
          "decide which side you are on which will determine the fate of the " 
          "galaxy." 
       << endl;
  
  string name;
  cout << "What is your name warrior? " << endl;
  getline(cin, name);

  string side;
  cout << "Hello " << name << "." 
       << " Now, what side do you choose? (jedi or sith)" << endl;
  getline(cin, side);

  if (side == "jedi") {
    string jedi_knight = "jedi knight";
    cout << "You have become a " << jedi_knight << "." << endl;
    cout << "Welcome to the jedi order!" << endl;
    
    string lightsaber_color;
    cout << "Now, choose your lightsaber color. (cannot be red or black)" 
         << endl;
    getline(cin, lightsaber_color);
    
    if (lightsaber_color == "red" || lightsaber_color == "black") {
      cout << "red and black is for the sith" << endl;
      return 2;
    } else {
      cout << "Very good choice!" << endl;
    }
  } else if (side == "sith") {
    string sith = "sith knight";
    cout << "You have become a " << sith << "." << endl;
    cout << "Welcome to the sith order" << endl;

    string lightsaber_color;
    cout << "Now, choose your lightsaber color. (red or black)" << endl;
    getline(cin, lightsaber_color);

    if (lightsaber_color == "black" || lightsaber_color == "red") {
      cout << "Very good choice!" << endl;
    } else {
      cout << "You must choose red or black!" << endl;
      return 2;
    }
  } else {
    cout << "You decided to become neither and live a regular life in the " 
            "galaxy. May the force be with you." 
         << endl;
    cout << "The end" << endl;
    return 1;
  }
    
  string special_ability;
  cout << "Choose a special ability (force pull or force push)" << endl;
  getline(cin, special_ability);
    
  if (special_ability == "force pull" || special_ability == "force push") {
    cout << "Nice! You have chosen " << special_ability << "." << endl;
  } else {
    cout << "You have to choose one of the two." << endl;
    return 3;
  }
    
  if (side == "jedi") {
    cout << "You have been ordered to travel to the planet of mustafar due to " 
            "reported signs of sith activity." 
         << endl;
    cout << "You arrived and sensed a disturbance in the force." << endl;
    cout << "Asajj Ventress appears and you prepare for battle!" << endl;
  } else if (side == "sith") {
    cout << "You been ordered to travel to coruscant to steal the sacred " 
            "scrolls from the jedi temple" 
         << endl;
    cout << "You arrived and sensed a disturbance in the force." << endl;
    cout << "Obi Wan Kenobi appears and you prepare for battle!" << endl;
  }
    
  string fight_run;
  cout << "What will you do? (run or fight)" << endl;
  getline(cin, fight_run);
    
  if (fight_run == "fight") {
    cout << "You are now in battle! You have 50 health." << endl;
    string fight_move;
      
    if (side == "jedi") {
      cout << "Asajj is heading towards you. What will you do? (lightsaber or " 
              "ability)" 
           << endl;
      getline(cin, fight_move);

      int damage = 50;
      if (fight_move == "lightsaber" && side == "jedi") { 
        cout << "You struck Asajj with your lightsaber and defeated her. But, " 
                "you took 10 damage" 
             << endl;
        damage = damage - 10;
        cout << "You now have " << damage << " of health" << endl;
        cout << "Congrats! You defeated Asajj ventress and as a reward the " 
                "jedi council granted you the rank of jedi master!" 
             << endl;

        string jedi_knight = "jedi knight";
        string jedi_master = jedi_knight.erase(5, 6);
        jedi_master = jedi_knight.insert(5, "master");

        cout << "You are now a " << jedi_master << "!" << endl;
        cout << "The End" << endl;
    
        return 0;
         
      } else if (fight_move == "ability" && side == "jedi") {
        cout << "You used " << special_ability << " and took down Asajj." 
             << endl;
        damage = damage + 20;
        cout << "You gained health in the process so you gained 20 health" 
             << endl;
        cout << "You now have " << damage << " of health" << endl;
        cout << "Congrats! You defeated Asajj ventress and as a reward the " 
                "jedi council granted you the rank of jedi master!" 
             << endl;

        string jedi_knight = "jedi knight";
        string jedi_master = jedi_knight.erase(5, 6);
        jedi_master = jedi_knight.insert(5, "master");

        cout << "You are now a " << jedi_master << "!" << endl;
        cout << "The End" << endl;
    
        return 0;
      }
    
    } else if (side == "sith") {
      cout << "Obi Wan is heading towards you. What will you do?(lightsaber or " 
              "ability)" 
           << endl;
      getline(cin, fight_move);
      int damage = 50;
      
      if (fight_move == "lightsaber" && side == "sith") {
        cout << "You struck Obi Wan with your lightsaber and defeated him. " 
                "But, you took 10 damage" 
             << endl;
        damage = damage - 10;
        cout << "You now have " << damage << " of health" << endl;

        cout << "Congrats! You defeated Obi Wan Kenobi and as a reward the " 
                "sith council granted you the rank of sith lord!" 
             << endl;

        string sith_knight = "sith knight";
        string sith_lord = sith_knight.erase(5, 6);
        sith_lord = sith_knight.insert(5, "lord");

        cout << "You are now a " << sith_lord << "!" << endl;
        cout << "The End" << endl;
    
        return 0;
      
      } else if (fight_move == "ability" && side == "sith") {
        cout << "You used " << special_ability << " and took down Obi Wan." 
             << endl;
        damage = damage + 20;
        cout << "You gained health in the process so you gained 20 health" 
             << endl;
        cout << "You now have " << damage << " of health" << endl;

        cout << "Congrats! You defeated Obi Wan Kenobi and as a reward the " 
                "sith council granted you the rank of sith lord!" 
             << endl;

        string sith_knight = "sith knight";
        string sith_lord = sith_knight.erase(5, 6);
        sith_lord = sith_knight.insert(5, "lord");

        cout << "You are now a " << sith_lord << "!" << endl;
        cout << "The End" << endl;
    
        return 0;
      
      } else {
        cout << "You must choose one of the options" << endl;
        return 5;
      }
    }
  } else if (fight_run == "run" && side == "jedi") {
    cout << "You tried to run away but Asajj force pulled you closer to her " 
            "and stabbed you with her lightsaber. May the force guide you in " 
            "the afterlife." 
         << endl;
    return 1;
    
  } else if (fight_run == "run" && side == "sith") {
    cout << "You tried to run away but Obi Wan Kenobi had the high ground and " 
            "sliced you in half. May the force guide you in the afterlife." 
         << endl;
    
  } else {
    cout << "You must choose one of the options" << endl;
    return 4;
  } 
}
