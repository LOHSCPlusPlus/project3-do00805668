#include <iostream>
#include "ReadUtils.h"
#include "ItemDB.h"

using namespace std;
//function to display menu
void displayMenu()
{
  cout << "Birdy :D" << endl;
  cout << endl;
  cout <<"1. Reload data" << endl;
  cout <<"2. Print all birds" << endl;
  cout <<"3. Add new bird" << endl;
  cout <<"4. Remove bird" << endl;
  cout <<"5. Save database to file" << endl;
  cout <<"6. Quit :(" << endl;
}

int main() {
  BirdDB birds;
  bool select = true;
  int choose = 0;
  birds.readBirds();
  int numBirds = birds.getnum();
  cout << numBirds << endl;
  //option selection
  while(select)
    {
      displayMenu();
      choose = readInt("Enter option here: ");
      while(choose <= 0 || choose > 6){
        choose = readInt("Out of range, try again: ");
      }
      //option 1 reload data
      if(choose == 1)
      {
        birds.readBirds();
        cout << "Reload successful!" << endl;
      }
      //option 2 print all birds
      if(choose == 2)
      {
      birds.print(cout);
      }
      //option 3 add new bird
      if(choose == 3)
      {
        if(numBirds >= 500) cout << "Storage Full!!" << endl;
        else{
          birds.add();
        }
      }
      //option 4 removing bird
      if (choose == 4)
      {
        int index = 0;
        index = readInt("Please enter what bird you want to remove by index: ");
        while(index <= 0 || index > numBirds)
          {
            index = readInt("Index out of range! try again: ");
          }
        birds.remove(index);
        cout << "Removed!" << endl;
      }
      //option 5 save birds to file
      if (choose == 5)
      {
        birds.save();
        cout << "Save successful!!" << endl;
      }
      //option 6 quit :(
      if (choose == 6)
      {
        select = false;
      }
    }
  cout <<"Thanks for using my program" << endl;
    return 0;
}
